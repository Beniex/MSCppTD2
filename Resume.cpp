
//////////////////////////////////////////////////////////////////////////////
// resume.cpp
// INSA - Departement Informatique - MSIF -
//////////////////////////////////////////////////////////////////////////////

using namespace std;
#include <iostream>
#include <cstring>
#include <cctype>
#include "Resume.h"

#define DEBUG

//////////////////////////////////////////////////////////////////////////////
// Constructeurs
//////////////////////////////////////////////////////////////////////////////
Resume::Resume()
{
#ifdef DEBUG
		cout <<"constructeur de Resume par void"<<endl;
#endif


		int nbCars = 0;
		int nbMots = 0;
		int nbLignes = 0;
		etat = Resume::VIDE; 
	cout <<"constructeur par défaut utilise" << endl;
}


Resume:: Resume( const char * blabla)
{
#ifdef DEBUG
	cout <<"constructeur de Resume par char *"<<endl;
#endif
	cout <<"A COMPLETER ICI...." << endl;
}
//////////////////////////////////////////////////////////////////////////////
// Realisation des fonctions membres de la classe
//////////////////////////////////////////////////////////////////////////////

void Resume::Afficher()
{
#ifdef DEBUG
	cout <<"Resume::Afficher "<<endl;
#endif
	int nbCars;
		int nbMots;
		int nbLignes;
		STATUT etat;
	cout <<"le nombre de caracteres est de "<< nbCars << endl;
	cout <<"le nombre de mots est de "<< nbMots << endl;
	cout <<"le nombre de lignes est de "<< nbLignes << endl;
	cout <<"le statut du resume est "<< etat << endl;
}


void Resume ::Saisir()
{
#ifdef DEBUG
	cout <<"Resume :: Saisir " <<endl;
#endif
	char caractereSaisi; 
	while(true){
		cin >> caractereSaisi; 
		if(caractereSaisi == '#'){
			break; 
		} else {
			int longueur = strlen(tabTexte); 
			if(longueur>)
			tabTexte[longueur] = caractereSaisi; 
			tabTexte[longueur + 1] = '\0'; 
		}
	}
	cout <<"saisie complete" << endl;
}

void Resume ::Traiter()
{
#ifdef DEBUG
	cout <<"Resume :: Traiter " <<endl;
#endif

 	cout <<"A COMPLETER ICI...." << endl;
}


