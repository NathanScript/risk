/**
 * @file Monde.h
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 28/09/2015
 * @brief Classe représentant un ensemble de territoires
**/

#ifndef __MONDE_H__
#define __MONDE_H__

#include <SFML/Graphics.hpp>
#include <string>

/**
 * @class Monde Monde.h
 * 
 * @brief Classe implémentant un monde
 * 
 * Elle est composé d'un nom, d'un joueur qui correspond au joueur possédant le territoire
 * ainsi que d'un entier qui représente le nombre de soldat présent sur le territoire
**/ 
class Monde
{
	private:
		vector<Continent> listecontinents_;
      
	public:
     
	/**
	* @brief Constructeur
	*/
	Monde();

	/**
	* @brief Récupère la liste des continents qui constituent le monde
	* @return listecontinents_
	*/
	vector<Continent> getListecontinents();

};

#endif // __MONDE_H__
