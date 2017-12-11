/*
 * Parser.cpp
 *
 *  Created on: 29 nov. 2017
 *      Author: Djenna
 */

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	string chemin;
	//On demande à l'utilisateur de renseigner le chemin du fichier
	cout<< "Renseigner le chemin du fichier à lire" <<endl;
	cin >> chemin;
	//On ouvre le fichier en lecture
	ifstream fichier(chemin, ios::in);
    if(fichier)  // si l'ouverture a réussi
    {
    	string ligne;
    	int numLigne = 0;
    	//On lit le fichier en entier
    	while(getline(fichier, ligne))
    	{
    		if((ligne!="\r\n")&&(ligne!="")&&(ligne!="\n"))
    		{
        		//Si la ligne n'est pas un commentaire
        		if((ligne[0]!='#')&&(ligne!=""))
        		{
        			switch (numLigne)
        			{
        				//Position de la caméra
        				case 0:
        					//Remplir les données de la caméra

        					cout<< numLigne << "  "<<ligne<<endl;
        					numLigne++;
    						break;
        				//Position superieure gauche de l'ecran
        				case 1:
        					//Remplir donnees
        					cout<< numLigne << "  "<<ligne<<endl;
        					numLigne++;
        					break;
        				//Coin superieure droit
        				case 2:
        					//Remplir donnees
        					cout<< numLigne << "  "<<ligne<<endl;
        					numLigne++;
        					break;
        				//Coin inferieur gauche
        				case 3:
        					//Remplir donnees
        					cout<< numLigne << "  "<<ligne<<endl;
        					numLigne++;
        					break;
        				//Resolution horizontale
        				case 4:
        					//Remplir donnees
        					cout<< numLigne << "  "<<ligne<<endl;
        					numLigne++;
        					break;
        				//Couleur de fond
        				case 5:
        					//Remplir donnees
        					cout<< numLigne << "  "<<ligne<<endl;
        					numLigne++;
        					break;
        				//position source lumineuse et sa couleur
           				case 6:
            				//Remplir donnees
           					cout<< numLigne << "  "<<ligne<<endl;
           					numLigne++;
            				break;
           				default:
           					//Objets sur la scène
        					cout<<ligne<<endl;
        					numLigne++;

        			}

        		}


    		}
    		else
    		{
    			getline(fichier, ligne);
    		}

    	}

    	fichier.close();  // on ferme le fichier
    }
    else
    {
    	cerr << "Impossible d'ouvrir le fichier ! \n" << endl;
    }


}



