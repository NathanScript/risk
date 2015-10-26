/**
 * @file Territoire.h
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 28/09/2015
 * @brief Classe héritant de Sprite pour la création des territoires
**/

#ifndef __TERRITOIRE_H__
#define __TERRITOIRE_H__

#include <SFML/Graphics.hpp>
#include <string>

/**
 * @class Territoire Territoire.h
 *
 * @brief Classe implémentant un territoire
 *
 * Elle est composé d'un nom, d'un joueur qui correspond au joueur possédant le territoire
 * ainsi que d'un entier qui représente le nombre de soldat présent sur le territoire
**/
class Territoire
{
	private:
		int id_;
		std::string nom_;
		sf::Texture texture_;
		sf::Sprite sprite_;
		int posseceur_;
		int nbSoldat_;

	public:

	/**
	* @brief Constructeur
	*/
	Territoire(int id_, std::string nom, std::string lientexture, int joueur, int nbSoldat);

	/**
	* @brief Récupère le nom du territoire
	* @return nom_
	*/
	std::string getNom();

	/**
	* @brief Récupère le joueur possédant le territoire
	* @return posseceur_
	*/
	int getPosseceur();

	/**
	* @brief Récupère le sprite du territoire
	* @return sprite_
	*/
	sf::Sprite& getSprite();

	/**
	* @brief Récupère le nombre de soldat présent sur le territoire
	* @return nbSoldat_
	*/
	int getNbSoldat();

	/**
	* @brief Définit le joueur possédant le territoire
	* @param Joueur qui capture le territoire
	*/
	void setPosseceur(int joueur);

	/**
	* @brief Place un nombre de soldat sur le territoire
	* @param entier nombre de soldat à placé
	*/
	void setNbSoldat(int soldataplacer);


};

#endif // __TERRITOIRE_H__
