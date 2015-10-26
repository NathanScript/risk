/**
 * @file Continent.cpp
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 22/09/2015
 * @brief Implémentation de la classe Continent
**/
#include "header/Continent.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

//----------------------------------------------------------------------------------------
Continent::Continent(std::string nom)
{
	nom_ = nom;
	std::string fichier = nom+".txt";
	std::string ligne;
	std::string lien;
	std::string nomterritoire;
	int i = 0;	
	ifstream fic(fichier);
	getline(fic,ligne);
	while(!fic.eof()){
		stringstream ss(ligne);
		ss >> lien >> nomterritoire;
		lien = "ressource/carte/" + nom + "/" + lien;
		Territoire region(i,nomterritoire, lien, 0, 0);
		listeterritoire_.push_back(region);
		++i;
		getline(fic,ligne);	
	}
}

//----------------------------------------------------------------------------------------
Territoire Continent::getlisteterritoire(int i)
{
	return listeterritoire_.at(i);
}

//----------------------------------------------------------------------------------------
int Continent::getNbterritoire()
{
	return listeterritoire_.size();
}

