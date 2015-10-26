/**
 *
 *
**/
#ifndef __renforcement_H__
#define __renforcement_H__

#include <iostream>
#include <vector>

/**
 * @class Joueur
 *
 *
 */
class Renforcement
{

	public :
		/**
		 * @brief Constructeur, crée un Ravitaillement
		 **/
		Renforcement(Jeu jeu, Joueur joueur);

		/**
		 * @brief Fin du Ravitallement, passage à l'étape combat
		 **/
		void debutCombat();


		/**
	 	 *	@brief Affiche l'etape en cours
	 	 **/
		void afficher();

		/**
		 * @brief deplace les troupes d'un pays à un autre
		 * @param paysO : pays d'origine des troupes
		 * @param paysA : pays d'arrive des troupes
		 * @param nbTroupes : le nombre de troupes à déplacer
		 **/
		void deplaceTroupes(Pays paysO, Pays paysA, nbTroupes);
};

#endif 
