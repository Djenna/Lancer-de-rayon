/*
 * Parser.hpp
 *
 *  Created on: 23 déc. 2017
 *      Author: Djenna
 */

#ifndef PARSER_HPP_
#define PARSER_HPP_


/**
 * Cette methode decoupe la ligne, en fonction d'un delimitateur, en plusieurs token.
 */
std::vector<std::string> split(const std::string& str, const std::string& delim);
/**
 * Cette methode verifie que la ligne contient bien le nombre d'arguments voulu et qu'il s'agit uniquement de nombres
 */
bool verification(const std::vector<string> ligne, int nbArgument);
/**
 * Méthode pour enlever la virgule, positionnee à la fin d'une chaine
 */
bool enleverVirgule(std::string& str);
/**
 * Méthode qui permet de verifier que le fichier contient bien le nombre de ligne minimum
 */
bool checkLigne(std::string chemin);

/**
 * Cette methode lit un fichier decrivant une scene et instancie les données correspondantes a ses element
 */
Scene ecritureScene(std::string const chemin);


#endif /* PARSER_HPP_ */
