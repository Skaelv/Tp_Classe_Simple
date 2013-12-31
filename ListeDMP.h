/*************************************************************************
                           ListeDMP  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Interface de la classe <ListeDMP> (fichier ListeDMP.h) ------
#if ! defined ( LISTEDMP_H_ )
#define LISTEDMP_H_

#include "DMP.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ListeDMP>
//
//
//------------------------------------------------------------------------

class ListeDMP
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	void Add( const DMP &dmp_to_add );
    // Mode d'emploi : Ajoute le DMP en argument à la liste.
    //
    // Contrat : La méthode ne vérifie pas si l'element existe déjà.
    //

    long Count(char* pszDMP = 0);
    // Mode d'emploi : Compte le nombre de DMP total dans la liste si specification=false,
    // Compte le nombre de DMP dont l'element est egal pszDMP.
    //
    // Contrat :
    //

	void Display();
	// Mode d'emploi : Affiche la liste des DMP. Affiche un message si la liste est vide.
	//
	// Contrat : Appelle la fonction Display de l'argument dmp(DMP) de l'objet courant qui affiche la liste des DMP.
	//

	long Find(const DMP &dmp_to_add, long firstPosition = 0);
	// Mode d'emploi : Recherche du DMP dmp_to_add à partir de la position FirstPosition (0 par default)
	//
	// Contrat :
	//

	long FindCoord(const DMP &dmp_to_add, bool justElement, float& fX, float& fY, long firstPosition = 0);
	// Mode d'emploi : Recherche des coordonnées du DMP :
	// -si justeElement=True, FindCoord trouve le DMP correspondant au premier élement trouvé dans la liste
	//  à partir de firstPosition. Elle renvoie les coordonnées fX et fY en passage par référence,
	//  et la fonction retourne la position du DMP dans la liste.
	// -si justElement=False, FindCoord retourne la position à la quelle elle a trouvé le DMP dans la liste
	// Contrat :
	//

	char * GetData(float x, float y);
	 // Mode d'emploi : Cherche si la liste contient un DMP de coordonnées (x,y)
	 //
	 // Contrat :
	 //

//------------------------------------------------- Surcharge d'opérateurs
    ListeDMP & operator = ( const ListeDMP & unListeDMP );
    // Mode d'emploi : Copie d'une liste unListeDMP
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    ListeDMP ( const ListeDMP & unListeDMP );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ListeDMP ( );
    // Mode d'emploi : Constructeur par défault
    //
    // Contrat :
    //


    virtual ~ListeDMP ( );
    // Mode d'emploi : Desctructeur
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

ListeDMP * nextList;
DMP dmp;
bool isEmpty;


};

//--------------------------- Autres définitions dépendantes de <ListeDMP>

#endif // LISTEDMP_H_

