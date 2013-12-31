/*************************************************************************
                           Cartography  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Interface de la classe <Cartography> (fichier Cartography.h) ------
#if ! defined ( CARTOGRAPHY_H_ )
#define CARTOGRAPHY_H_

#include "DMP.h"
#include "ListeDMP.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Cartography>
//
//
//------------------------------------------------------------------------ 

class Cartography
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


	bool Add(float fX, float fY, char* pszDMP);
	// Mode d'emploi : Ajoute un élément dans l'attribut liste de cartography
	//
	// Contrat : Appel de la fonction Add de la classe listeDMP
	//

	long Count();
	// Mode d'emploi : Compte le nombre de DMP dans la liste
	//
	// Contrat : Appel de la fonction Count() de la classe listeDMP
	//

	long Count(char* pszDMP);
	// Mode d'emploi : Compte le nombre de DMP dans la liste dont l'element est égal à pszDMP
	//
	// Contrat : Appel de la fonction Count(char* pszDMP) de la classe listeDMP
	//

	long FindDMP(char* pszDMP, long lFirstPos, float& fX, float& fY) ;
	// Mode d'emploi : Renvoie la position du premier DMP trouvé à partir de la
	// position lFirstPosition dont l'élement est pszDMP ainsi que les coordonnées
	// fX et fY par reference
	// Contrat :
	//

	void Display() ;
	// Mode d'emploi : Affiche la liste de dmp
	//
	// Contrat : Appel de la fonction Display de l'attribut liste(listeDMP)
	//

	char * GetData(float x, float y) ;
	// Mode d'emploi : Renvoie l'élement correspondant aux coordonées (x,y)
	//
	// Contrat : Appel de la fonction GetDate de l'attribut liste(listeDMP)
	//


//------------------------------------------------- Surcharge d'opérateurs
    Cartography & operator = ( const Cartography & unCartography );
    // Mode d'emploi : Copie d'une Cartography unCartography
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Cartography ( const Cartography & unCartography );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Cartography ( );
    // Mode d'emploi : Constructeur par défault
    //
    // Contrat :
    //

    virtual ~Cartography ( );
    // Mode d'emploi : Destructeur par défault
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    ListeDMP liste;


};

//--------------------------- Autres définitions dépendantes de <Cartography>

#endif // CARTOGRAPHY_H_

