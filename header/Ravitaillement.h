/**
 *
 *
**/
#ifndef __Ravitaillement_H__
#define __Ravitaillement_H__

#include <iostream>
#include <vector>
#include "Territoire.h"
#include "Jeu.h"
#include "Joueur.h"

/**
 * @class Ravitaillement
 *
 *
 */
class Ravitaillement : public Etape
{
	private:

		Jeu* jeu_;

	public:
		/**
		 * @brief Constructeur, crée un Ravitaillement
		 **/
		Ravitaillement(Jeu* jeu);

		/**
		 * @brief Fin du Ravitallement, passage à l'étape combat
		 **/
		void debutCombat();

		/**
		 * @brief Calcul le nombre de renforts dont le joueur dispose
		 * @return le nombre de troupes en renfort dont le joueur dispose
		 **/
		int calculRenfort();

		/**
		 * @brief Place des troupes sur le pays en parametre
		 * @param pays : le pays qui va recevoir des nouvelles troupes
		 * @param nbTroupes : le nombre de troupes à placer sur le pay
		 */
		void placerTroupes(std::vector<Continent> listecontinent, int nbTroupes, sf::Vector2i& mousePos);

		void afficher();

};

#endif
