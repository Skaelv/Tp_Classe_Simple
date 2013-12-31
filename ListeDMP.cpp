/*************************************************************************
                           ListeDMP  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Réalisation de la classe <ListeDMP> (fichier ListeDMP.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ListeDMP.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ListeDMP::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


void ListeDMP::Add( const DMP &dmp_to_add )
// Algorithme :
// Si le maillon courant est vide, on lui attribue l'objet dmp, sinon on le passe au suivant.
{
	this->nextList = new ListeDMP(*this);
	this->dmp = dmp_to_add;
	this->isEmpty = false;
} //----- Fin de Add

long ListeDMP::Count(char* pszDMP)
// Algorithme :
// On parcours tous les membres de la liste. Si il n'y a pas de specification
// ou si la specification est verifiee, on incremente le nombre de resultats.
{
    long result = 0;
    ListeDMP * current = this;
    while(!current->isEmpty){
        if(pszDMP==0 || current->dmp.GetElement() == pszDMP)
		{
        	result++;
		}
        current = current->nextList;
    }
    return result;
}

void ListeDMP::Display( )
// Algorithme :
// Chaque maillon de la liste s'affiche, et demande au suivant de s'afficher,
//(si celui-ci n'est pas vide) appel recursif de la méthode Display

{
    if(isEmpty){ // Seul le premier peut etre vide ET voir sa methode Display appelee (cf 2eme if)
        cout<<"Aucun element a afficher"<<endl;
    } else {
        dmp.Display();
        if(!nextList->isEmpty){
            nextList->Display();
        }
    }

} //----- Fin de Display

long ListeDMP::Find(const DMP &dmp_to_find, long firstPosition)
// Algorithme : Appel de la fonction FindCoord avec l'attribut justElement=False
//
{
	float x,y;
	return this->FindCoord(dmp_to_find,false,x,y,firstPosition);
} //----- Fin de Find

long ListeDMP::FindCoord(const DMP &dmp_to_find, bool justElement, float& fX, float& fY, long firstPosition)
// Algorithme :
// On parcourt les éléments de la liste jusqu'a trouver un element correspondant.
//Test de correspondance GetElement si justElement=True, Equal si justeElement=False
{
    ListeDMP * current = this;
    int i = 0;
    while(!current->isEmpty){
        if(((justElement&&(current->dmp.GetElement()==dmp_to_find.GetElement())) || (!justElement&&(current->dmp.Equal(dmp_to_find))) ) && i >= firstPosition) {
        	fX = dmp.GetX();
        	fY = dmp.GetY();
        	return i;
        }
        current = current->nextList;
        i++;
    }
    return -1;
} //----- Fin de FindCoord

char * ListeDMP::GetData(float fx, float fy)
// Algorithme :
// On parcourt chaque element de la liste jusqu'a trouver une DMP aux coordonnees indiquees
{
    ListeDMP * current = this;
    while(!current->isEmpty){
        if(current->dmp.GetX() == fx && current->dmp.GetY() == fy ) return current->dmp.GetElement();
        current = current->nextList;
    }
    return 0;
} //----- Fin de GetData


//------------------------------------------------- Surcharge d'opérateurs

ListeDMP & ListeDMP::operator = ( const ListeDMP & unListeDMP )
// Algorithme :
//
{
    dmp = unListeDMP.dmp;
    nextList = unListeDMP.nextList;
    isEmpty = unListeDMP.isEmpty;
	return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
ListeDMP::ListeDMP ( const ListeDMP & unListeDMP )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ListeDMP>" << endl;
#endif
    dmp = unListeDMP.dmp;
	nextList = unListeDMP.nextList;
	isEmpty = unListeDMP.isEmpty;
} //----- Fin de ListeDMP (constructeur de copie)


ListeDMP::ListeDMP ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ListeDMP>" << endl;
#endif

    this->nextList = 0;
    this->isEmpty = true;

} //----- Fin de ListeDMP



ListeDMP::~ListeDMP ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ListeDMP>" << endl;
#endif
    if(!isEmpty){
    	delete(nextList);
    }
} //----- Fin de ~ListeDMP


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

