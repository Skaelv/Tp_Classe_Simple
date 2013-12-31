/*************************************************************************
                           Cartography  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Réalisation de la classe <Cartography> (fichier Cartography.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "B3408_class.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Cartography::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
bool Cartography::Add(float fX, float fY, char* pszDMP)
// Algorithme :
//
{
	DMP dmp(fX,fY,pszDMP);
	if(liste.Find(dmp)==-1){
		liste.Add(dmp);
		return true;
	}
	return false;
} //----- Fin de Méthode

long Cartography::Count()
// Algorithme :
//
{
	return liste.Count();
} //----- Fin de Méthode


long Cartography::Count(char* pszDMP)
// Algorithme :
//
{
	return liste.Count(pszDMP);
} //----- Fin de Méthode


void Cartography::Display()
// Algorithme :
//
{
	cout<<"Affichage des donnees :"<<endl;
	liste.Display();

} //----- Fin de Méthode


long Cartography::FindDMP(char* pszDMP, long lFirstPos, float& fX, float& fY)
// Algorithme :
//
{
	return liste.FindCoord(DMP(0,0,pszDMP),true,fX,fY,lFirstPos);
} //----- Fin de Méthode


char * Cartography::GetData(float x, float y)
// Algorithme :
//
{
	return liste.GetData(x,y);
} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Cartography & Cartography::operator = ( const Cartography & unCartography )
// Algorithme :
//
{
	this->liste = unCartography.liste;
	return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Cartography::Cartography ( const Cartography & unCartography )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Cartography>" << endl;
#endif
    this->liste = unCartography.liste;
} //----- Fin de Cartography (constructeur de copie)


Cartography::Cartography ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Cartography>" << endl;
#endif



} //----- Fin de Cartography


Cartography::~Cartography ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Cartography>" << endl;
#endif

} //----- Fin de ~Cartography


//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées


