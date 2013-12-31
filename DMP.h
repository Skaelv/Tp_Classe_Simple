/*************************************************************************
                           DMP  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Interface de la classe <DMP> (fichier DMP.h) ------
#if ! defined ( DMP_H_ )
#define DMP_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <DMP>
//
//
//------------------------------------------------------------------------

class DMP
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

	void Display();
	// Mode d'emploi : Affichage de l'element, et des coordonnées du DMP.
	//
	// Contrat :
	//

	bool Equal( const DMP & unDMP) const;
	// Mode d'emploi :
	//
	// Contrat :
	//

	char * GetElement() const;
	// Mode d'emploi : Renvoie l'element du Dmp
	//
	// Contrat :
	//

	float GetX() const;
	// Mode d'emploi : Renvoie l'abscisse du Dmp
	//
	// Contrat :
	//

	float GetY() const;
	// Mode d'emploi : Renvoie l'ordonnée du Dmp
	//
	// Contrat :
	//

//------------------------------------------------- Surcharge d'opérateurs
    DMP & operator = ( const DMP & unDMP );
    // Mode d'emploi : Opérateur de Copie des attributs du Dmp passé en argument dans ceux du Dmp qui appelle la fonction
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur

    DMP ( );
    // Mode d'emploi : Constructeur
    //
    // Contrat :
    //

    DMP (float x, float y,char * element);
    // Mode d'emploi : Surcharge du constructeur permettant d'initialiser les arguments.
    //
    // Contrat :
    //

    DMP ( const DMP & unDMP );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    virtual ~DMP ( );
    // Mode d'emploi : Destructeur
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
float x,y;
char * element;
};

//--------------------------- Autres définitions dépendantes de <DMP>

#endif // DMP_H_

