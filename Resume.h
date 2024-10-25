//////////////////////////////////////////////////////////////////////////////
// resume.h
// INSA - Departement Informatique - MSIF -

//////////////////////////////////////////////////////////////////////////////
// Declaration de la Classe

class Resume
{
	public:
		enum STATUT { OK, TropDeCars, TropDeMots, TropDeLignes, VIDE };
		Resume();
		Resume(const char * blablabla);
		void Traiter();
		void Saisir();
		void Afficher();
	private:
		////////////////////////////////////////////////////////////
		// attributs de la classe
		static const int MAXTABLEAU=1000;
		char tabTexte[MAXTABLEAU];
		int nbCars;
		int nbMots;
		int nbLignes;
		STATUT etat;
		static const int FINRESUME='#';
		static const int MAXMOT=200;
		static const int MAXLIGNE=20;
		static const int MAXCAR=500;

};

