
/**
 * @file combat.cpp
 * @author A.EVOLA N.PROSPERT
 * @since
 * @brief implémentation des méthodes de la classe Combat
 *
**/


#include <iostream>
#include "header/Ravitaillement.h"

 using namespace std;
//---------------------------------------------------------------------
//---------------------------------------------------------------------

Ravitaillement::Ravitaillement(Jeu* jeu){jeu_ = jeu;}

void Ravitaillement::debutCombat()
{
	//jeu_->setEtape();
}

int Ravitaillement::calculRenfort()
{
	int nbPays = jeu_->getJoueur().getNbPays();
	int renfort;

	if(nbPays >= 12)
		renfort = nbPays/3;
	else
		renfort = 3;

	return renfort;
}

void Ravitaillement::placerTroupes(vector<Continent> listecontinent, int nbTroupes, sf::Vector2i& mousePos)
{
  int i = 0;
  int j = 0;
  bool trouve = false;
  while(!trouve && i < listecontinent.size()){
    while(!trouve && j < listecontinent.at(i).getNbterritoire()){
    	if(jeu_->mouseInSprite(mousePos,listecontinent.at(i).getlisteterritoire(j).getSprite())){
        trouve = true;
    		if(listecontinent.at(i).getlisteterritoire(j).getPosseceur() == jeu_->getJoueur().getId()){
    				jeu_->getJoueur().ravitaillement(nbTroupes);
    				listecontinent.at(i).getlisteterritoire(j).setNbSoldat(nbTroupes);
    				cout << "Ajout de Soldat !" << endl;
    		} else {
    			cout << "Ce territoire ne vous appartient pas !" << endl;
    		}
    	}
      ++j;
    }
    ++i;
    j = 0;
  }
}

void Ravitaillement::afficher(){
	cout << "Passage à l'étape de combat" << endl;
}
