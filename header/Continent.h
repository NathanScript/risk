/**
 * @file Continent.h
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 28/09/2015
 * @brief Classe représentant un ensemble de territoires
**/

#ifndef __CONTINENT_H__
#define __CONTINENT_H__

#include <SFML/Graphics.hpp>
#include <string>
#include "Territoire.h"

/**
 * @class Continent Continent.h
 * 
 * @brief Classe implémentant un continent
 * 
 * Elle est composé d'un nom, d'un joueur qui correspond au joueur possédant le territoire
 * ainsi que d'un entier qui représente le nombre de soldat présent sur le territoire
**/ 
class Continent
{
	private:
		std::string nom_;
		std::vector<Territoire> listeterritoire_;
		
      
	public:
     
	/**
	* @brief Constructeur
	*/
	Continent(std::string nom_);

	/**
	* @brief Récupère le nom du continent
	* @return nom_
	*/
	std::string getNom();

	/**
	* @brief Récupère la liste des territoires qui constituent le continent
	* @return listeterritoire_
	*/
	Territoire getlisteterritoire(int i);

	/**
	* @brief Récupère le nombre de territoire qui constituent le continent
	* @return la taille du vector listeterritoire_;
	*/
	int getNbterritoire();

};

#endif // __CONTINENT_H__
