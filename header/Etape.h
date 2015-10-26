/**
 *
 *
**/
#ifndef __Etape_HPP__
#define __Etape_HPP__

#include <iostream>
#include <vector>
#include "Continent.h"

/**
 * @interface Etape
 *
 *
 */

class Etape
{
	public :
		Etape(){}
		virtual void jouer(){};
		virtual void afficher(){};
		//virtual void debutCombat();
		virtual void placerTroupes(std::vector<Continent> listecontinent, int nbTroupes, sf::Vector2i& mousePos){}
		/*virtual void finCombat() = 0;
		virtual void debutTour() = 0;
		virtual void finPartie() = 0;*/

};

#endif
