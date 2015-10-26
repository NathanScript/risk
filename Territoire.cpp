/**
 * @file Territoire.cpp
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 28/09/2015
 * @brief Implémentation de la classe Territoire
**/
#include "header/Territoire.h"
#include <iostream>
using namespace std;

//----------------------------------------------------------------------------------------
Territoire::Territoire(int id, string nom, string lientexture, int joueur, int nbSoldat)
{
	id_ = id;
	nom_ = nom;
	texture_.loadFromFile(lientexture);
	posseceur_ = joueur;
	nbSoldat_ = nbSoldat;
}

//----------------------------------------------------------------------------------------
string Territoire::getNom()
{
	return nom_;
}

//----------------------------------------------------------------------------------------
sf::Sprite& Territoire::getSprite()
{
	sprite_.setTexture(texture_);
	sprite_.setColor(sf::Color(0,255,0));
	return sprite_;
}

//----------------------------------------------------------------------------------------
int Territoire::getPosseceur()
{
	return posseceur_;
}

//----------------------------------------------------------------------------------------
int Territoire::getNbSoldat()
{
	return nbSoldat_;
}

//----------------------------------------------------------------------------------------
void Territoire::setPosseceur(int joueur)
{
	posseceur_ = joueur;
}

//----------------------------------------------------------------------------------------
void Territoire::setNbSoldat(int soldataplacer)
{
	nbSoldat_ = soldataplacer;
}

