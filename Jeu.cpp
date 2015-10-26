#include "header/Jeu.h"

using namespace std;

Jeu::Jeu(){
	ravitaillement_ = new Ravitaillement(this);
	courant_ = new Menu(this);
	fenetre_.create(sf::VideoMode::getDesktopMode(),"Risk_Games",sf::Style::Default);
}

sf::RenderWindow& Jeu::getFenetre(){
	return fenetre_;
}

void Jeu::setEtape(Etape* etape){
	courant_ = etape;
}

Etape* Jeu::getEtatRavitaillement(){
	return ravitaillement_;
}

Etape* Jeu::getEtatCombat(){
	return combat_;
}

bool Jeu::debutPartie(vector<Continent> listecontinent){
	courant_->jouer();
	for(int j = 0; j < listecontinent.size(); ++j){
		for(int i = 0; i < listecontinent.at(j).getNbterritoire(); ++i){
			fenetre_.draw(listecontinent.at(j).getlisteterritoire(i).getSprite());
		}
	}
	return true;
}

bool Jeu::mouseInSprite(sf::Vector2i& mousePos, sf::Sprite& sprite){
	if(sprite.getGlobalBounds().contains(mousePos.x,mousePos.y)){
		return true;
	} else {
		return false;
	}
}

Joueur Jeu::getJoueur(){
	return joueur_;
}

void Jeu::setJoueur(Joueur joueur){
	joueur_ = joueur;
}

void Jeu::ravitaillementTroupes(vector<Continent> listecontinent, int nbTroupes, sf::Vector2i& mousePos){
	courant_->placerTroupes(listecontinent,nbTroupes,mousePos);
}
