/**
 * @file Menu.hpp
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 06/10/2015
 * @brief Etat Initiale du Jeu
**/

#ifndef __MENU_HPP__
#define __MENU_HPP__

#include <SFML/Graphics.hpp>
#include "Etape.h"
#include "memory"
#include <vector>
#include "Continent.h"

/**
 * @class Menu.hpp
 * 
 * @brief Patron de classe implémentant un menu
 * 
 * Elle est composé d'une fenetre, de trois sprites
**/ 

class Jeu;

class Menu : public Etape
{
	private:
		Jeu* jeu_;
      
      public:
            /**
            * @brief Constructeur
            */
            Menu(Jeu* jeu);
            
            /**
            * @brief Permet de lancer le début de la partie
            *
            */
            void jouer();

            /**
            * @brief Permet de lancer le début de la partie
            *
            */
            void afficher();
     
     
};

#endif // __MENU_HPP__
