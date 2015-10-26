#include "header/Jeu.h"

using namespace std;

Menu::Menu(Jeu* jeu){jeu_ = jeu;}

void Menu::jouer(){
	jeu_->setEtape(jeu_->getEtatRavitaillement());
	afficher();
}

void Menu::afficher(){
	cout << "Passage Etape Ravitaillement" << endl;
}
