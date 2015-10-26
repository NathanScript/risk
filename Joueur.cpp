/**
 * @file Territoire.cpp
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 07/10/2015
 * @brief Implémentation de la classe Joueur
**/

#include <iostream>
#include <vector>
#include "header/Joueur.h" 

using namespace std;
//----------------------------------------------------------------------------------------
Joueur::Joueur(int id, string nom)
{
	_id = id;
	_nom = nom;
	_reserve = 40;
}

//----------------------------------------------------------------------------------------
int Joueur::getId()
{
	return _id;
}

//----------------------------------------------------------------------------------------
string Joueur::getNom()
{
	return _nom;
}

//----------------------------------------------------------------------------------------
int Joueur::getNbPays()
{
	return _PaysControles.size();
}

//----------------------------------------------------------------------------------------
int Joueur::getReserve()
{
	return _reserve;
}

//----------------------------------------------------------------------------------------
void Joueur::conquete(Territoire newPays, int nbTroupes)
{
	_PaysControles.push_back(newPays);
	_reserve -= nbTroupes;
}

//----------------------------------------------------------------------------------------
void Joueur::ravitaillement(int nbTroupes)
{
	_reserve -= nbTroupes;
}

//----------------------------------------------------------------------------------------
void Joueur::perteTroupes(int nbTroupes)
{
	_reserve += nbTroupes;
}