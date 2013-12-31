/*************************************************************************
                           DMP  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Réalisation de la classe <DMP> (fichier DMP.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "DMP.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void DMP::Display()
// Algorithme :
{
	cout<<"("<<x<<","<<y<<")-> "<<element<<endl;
} //----- Fin de Méthode

bool DMP::Equal( const DMP & unDMP) const
// Algorithme :
//
{
	return (x==unDMP.x)&&(y==unDMP.y)&&(element==unDMP.element);
} //----- Fin de operator =

char * DMP::GetElement() const
// Algorithme :
//
{
    return element;
}

float DMP::GetX() const
// Algorithme :
//
{
    return x;
}

float DMP::GetY() const
// Algorithme :
//
{
    return y;
}

//------------------------------------------------- Surcharge d'opérateurs
DMP & DMP::operator = ( const DMP & unDMP )
// Algorithme :
//
{
    element = unDMP.element;
    x = unDMP.x;
    y = unDMP.y;
	return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
DMP::DMP ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <DMP>" << endl;
#endif

    x = 0;
    y = 0;
    element = 0;
} //----- Fin de DMP

DMP::DMP ( const DMP & unDMP )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <DMP>" << endl;
#endif

    x = unDMP.GetX();
    y = unDMP.GetY();
    element = unDMP.GetElement();
} //----- Fin de DMP (constructeur de copie)

DMP::DMP (float fx, float fy,char * felement)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <DMP>" << endl;
#endif
    x=fx;
    y=fy;
    element=felement;
} //----- Fin de DMP



DMP::~DMP ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <DMP>" << endl;
#endif
} //----- Fin de ~DMP


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

