#include <SFML/Graphics.hpp>
#include <iostream>
#include "header/Territoire.h"
#include "header/Etape.h"
#include "header/Jeu.h"
#include "header/Menu.h"
#include "header/Continent.h"

using namespace std;

int main() {
	Jeu partie;
	Joueur joueur1(1, "Joueur1");
	Joueur joueur2(2, "Joueur2");
	partie.setJoueur(joueur1);

	sf::Mouse mouse;
	sf::Vector2i mousePos;
	sf::Texture bouton;
	sf::Texture texturebouton;
  	sf::Texture texturetitre;
  	sf::Sprite titre;
  	sf::Sprite jouer;
  	sf::Sprite quitter;

  	texturebouton.loadFromFile("menu/bouton.png");
	jouer.setTexture(texturebouton);
	jouer.setScale(1.f,0.7f);
	jouer.setPosition(650,300);
	quitter.setTexture(texturebouton);
	quitter.setScale(1.f,0.7f);
	quitter.setPosition(650,500);
	texturetitre.loadFromFile("menu/titre.png");
	titre.setTexture(texturetitre);
	titre.setPosition(620,50);

	bool debutpartie = false;
	Continent europe("Europe");
	Continent afrique("Afrique");
	Continent asie("Asie");
	Continent ameriquenord("AmeriqueNord");
	Continent ameriquesud("AmeriqueSud");
	Continent oceanie("Oceanie");
	vector<Continent> listecontinent;
	listecontinent.push_back(europe);
	listecontinent.push_back(afrique);
	listecontinent.push_back(asie);
	listecontinent.push_back(ameriquenord);
	listecontinent.push_back(ameriquesud);
	listecontinent.push_back(oceanie);
	while (partie.getFenetre().isOpen()){
		sf::Event event;
		 mousePos.x = mouse.getPosition().x;
		 mousePos.y = mouse.getPosition().y;
		while(partie.getFenetre().pollEvent(event)){
			if(event.type ==sf::Event::Closed){
				partie.getFenetre().close();
			}
			if (event.type == sf::Event::MouseButtonPressed){
    			if (event.mouseButton.button == sf::Mouse::Left){
    				if(partie.mouseInSprite(mousePos,jouer) && !debutpartie){
    					partie.getFenetre().clear(sf::Color::White);
    					debutpartie = partie.debutPartie(listecontinent);
    					partie.getFenetre().display();
    				} else if (partie.mouseInSprite(mousePos,quitter)){
    					partie.getFenetre().close();
    				} else if (debutpartie){
							partie.ravitaillementTroupes(listecontinent,1,mousePos);
    				}

    			}
    		}
    		if(!debutpartie){
    			partie.getFenetre().clear(sf::Color::White);
				partie.getFenetre().draw(titre);
				partie.getFenetre().draw(quitter);
				partie.getFenetre().draw(jouer);
    		}
		}
		partie.getFenetre().display();
	}
	return 0;
}
