/**
 * @file Jeu.hpp
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 22/09/2015
 * @brief Création et gestion de l'interface utilisateur ainsi que du plateau du RISK
**/

#ifndef __JEU_HPP__
#define __JEU_HPP__

#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Continent.h"
#include "Joueur.h"
#include "Ravitaillement.h"
/**
 * @class Jeu.hpp
 *
 * @brief Patron de classe implémentant une interface utilisateur
 *
 * Elle est composé d'une fenetre SFML qui contient un ensemble de texture, sprite
 * ainsi que de texte.
**/
class Jeu
{
      private:
            sf::RenderWindow fenetre_;
            Etape* courant_;
            Etape* ravitaillement_;
            Etape* combat_;
            Etape* deplacement_;
            Joueur joueur_;


      public:
            /**
            * @brief Constructeur
            */
            Jeu();

            /**
            * @brief Accède à la fenetre du GUI
            *
            * @return la fenetre du jeu
            */
            sf::RenderWindow& getFenetre();

            /**
            * @brief Remplace l'étape courante
            *
            */
            void setEtape(Etape* etape);

            /**
            * @brief Retourne l'étape courante
            *
            * @return courant_;
            */
            Etape* getEtatRavitaillement();

            /**
            * @brief Retourne l'étape courante
            *
            * @return courant_;
            */
            Etape* getEtatCombat();

            /**
            * @brief Initialisie la partie graphique du menu
            */
            void initMenu();

            /**
            * @brief Lance le début de la partie
            *
            * @return Vrai si la partie est lancée
            */
            bool debutPartie(std::vector<Continent> listecontinent);

            /**
            * @brief Vérifie si la position de la sourie est sur le Sprite quitter
            *
            * @return Vrai si la sourie est le sprite quitter, faux sinon
            */
            bool mouseInSprite(sf::Vector2i& mousePos, sf::Sprite& sprite);

            /**
            * @brief Vérifie si la position de la sourie est sur le Sprite quitter
            *
            * @return Vrai si la sourie est le sprite quitter, faux sinon
            */
            Joueur getJoueur();

            void setJoueur(Joueur joueur);

            void ravitaillementTroupes(std::vector<Continent> listecontinent, int nbTroupes, sf::Vector2i& mousePos);
};

#endif // __JEU_HPP__
