
//============================================================================
// Name        : TPResume.cpp
// Author      : psc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

using namespace std;
#include <iostream>
#include "Resume.h"

int main() {
	cout << "!!!Hello World!!! 2015 " << endl;

	cout << "Test du constructeur sans parametres et test de la methode Afficher : "<< endl;
	Resume objet1;
	objet1.Afficher();

	cout << "Test du constructeur avec un paraemtre de type const char * : "<< endl;
	Resume objet2("pascale et nabila\n#");
	objet2.Afficher();
//
//	cout << "Test du constructeur II avec texte vide : "<< endl;
//	Resume objet3("#");
//	objet3.Afficher();
//
//	cout << "Test methodes Saisir et Traiter : "<< endl;
//	objet1.Saisir();
//	objet1.Traiter();
//	objet1.Afficher();
//
//	cout << "Tests  sur le fichier RESUMES par redirection des entrees de l'application "<< endl;
//	while ( !cin.eof() )
//	{
//	  	Resume resume;
//		resume.Saisir();
//		if ( cin.eof() ) break;// eof pendant la sméthode de saisie
//		resume.Traiter();
//		resume.Afficher();
//	}

	cout << "Fin des tests "<< endl;

	return 0;
}
