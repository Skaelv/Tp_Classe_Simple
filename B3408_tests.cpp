/*
 * B3408_tests.cpp
 *
 *  Created on: 18 oct. 2013
 *      Author: rnicolet
 */


#include <iostream>
#include "B3408_class.h"
#include "DMP.h"
#include "ListeDMP.h"

using namespace std;

class Tests
{
public :
	Tests();
private :

	bool T01();
	bool T02();
	bool T02_2();
	bool T03();
	bool T04();
	bool T05();
	bool T06();
	bool T07_1();
	bool T07_2();
	bool T07_3();
	bool T08();
	bool T09();

	void Afficher(int numTest,bool testValue,char* nom, char* description);
};

int main() {
	Tests test;
}/**/

bool Tests::T01(){ // Liste Vide
	ListeDMP ldmp;
	long c = ldmp.Count();
	return c == 0 ? true : false;
}

bool Tests::T02(){ // 3 dmp totalement differentes
	Cartography carto;

	carto.Add(0,0,"H2O");
	carto.Add(2,3,"H1O");
	carto.Add(4,5,"H3O");

	long c = carto.Count();
	return c == 3 ? true : false;
}

bool Tests::T02_2(){
	Cartography carto;

	for (int i=0; i<20000;i++){
		carto.Add(i,i+1,"H20");
	}

	long c = carto.Count();
	return c==20000 ? true : false;
}

bool Tests::T03(){ // 3 dmp differentes, 2 elements identiques
	Cartography carto;

	carto.Add(0,0,"H2O");
	carto.Add(2,3,"H2O");
	carto.Add(4,5,"H3O");

	long c = carto.Count();
	return c == 3 ? true : false;
}

bool Tests::T04(){ // Liste Vide
	Cartography carto;
	long c = carto.Count("H2O");
	return c == 0 ? true : false;
}

bool Tests::T05(){ // 3 dmp totalement differentes
	Cartography carto;

	carto.Add(0,0,"H2O");
	carto.Add(2,3,"H1O");
	carto.Add(4,5,"H3O");

	long c = carto.Count("CO2");
	return c == 0 ? true : false;
}

bool Tests::T06(){ // 3 dmp differentes, 2 elements identiques
	Cartography carto;

	carto.Add(0,0,"H2O");
	carto.Add(2,3,"H2O");
	carto.Add(4,5,"H3O");

	long c = carto.Count("CO2");
	return c == 0 ? true : false;
}

bool Tests::T07_1(){ // Element present une fois
	Cartography carto;

	carto.Add(0,0,"H2O");
	carto.Add(2,3,"H1O");
	carto.Add(4,5,"H3O");

	long c = carto.Count("H2O");
	return c == 1 ? true : false;
}

bool Tests::T07_2(){ // Element present une fois
	Cartography carto;

	carto.Add(0,0,"H2O");
	carto.Add(2,3,"H1O");
	carto.Add(4,5,"H3O");

	long c = carto.Count("H1O");
	return c == 1 ? true : false;
}

bool Tests::T07_3(){ // Element present une fois
	Cartography carto;

	carto.Add(0,0,"H2O");
	carto.Add(2,3,"H1O");
	carto.Add(4,5,"H3O");

	long c = carto.Count("H3O");
	return c == 1 ? true : false;
}

bool Tests::T08(){ // Element plusieurs fois présent
	Cartography carto;

	carto.Add(1,2,"H1O");
	carto.Add(0,0,"H2O");
	carto.Add(2,3,"H1O");
	carto.Add(4,5,"H3O");
	carto.Add(1,4,"H1O");

	long c = carto.Count("H1O");
	return c == 3 ? true : false;
}

bool Tests::T09(){ // Chaine nulle
	Cartography carto;

	carto.Add(1,2,"H1O");
	carto.Add(0,0,"H2O");
	carto.Add(2,3,"H1O");
	carto.Add(4,5,"H3O");
	carto.Add(1,4,"H1O");

	long c = carto.Count("");
	return c == 0 ? true : false;
}

void Tests::Afficher(int numTest, bool testValue,char* nom, char* description){

	cout<<"Test_"<<nom<<" : "<<description<<endl;
	cout<<(testValue?"OK":"PAS OK")<<endl;

}


Tests::Tests()
{
	int i = 1;
	Afficher(i++,T01(),"01","Liste vide, sans pszDMP");
	Afficher(i++,T02(),"02_1","Liste non vide, sans pszDMP");
	Afficher(i++,T02_2(),"02_2","Liste très grande, sans pszDMP");
	Afficher(i++,T03(),"03","Liste vide avec element redondant, sans pszDMP");
	Afficher(i++,T04(),"04","Liste vide, avec pszDMP");
	Afficher(i++,T05(),"05","Liste non vide ne contenant pas l'element, avec pszDMP");
	Afficher(i++,T06(),"06","Liste non vide ne contenant pas l'element, avec des elements redondants, avec pszDMP");
	Afficher(i++,T07_1(),"07_1","Element une fois dans la liste (premier)");
	Afficher(i++,T07_2(),"07_2","Element une fois dans la liste (milieu)");
	Afficher(i++,T07_3(),"07_3","Element une fois dans la liste (dernier)");
	Afficher(i++,T08(),"08","Element plusieurs fois dans la liste");
	Afficher(i++,T09(),"09","pszDMP vide");

}




