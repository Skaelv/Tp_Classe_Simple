/*
 * test.cpp
 *
 *  Created on: 11 oct. 2013
 *      Author: kantoine
 */

#include <iostream>
#include "B3408_class.h"
#include "DMP.h"
#include "ListeDMP.h"
#include <time.h>

using namespace std;

/*int main() {

	if(true){ // TEST DE AJOUT
		Cartography carto;
		for(int i = 0; i<20000;i++){
			carto.Add(i,i+1,"H2O");
		}
		for(int i = 0; i<20001;i+=1000){
			int clock1,clock2;
			clock1 = clock();
			for(int j = 0; j<i;j++){
				float x,y;
				carto.FindDMP("H2O",j,x,y);
			}
			clock2 = clock();
			double diffticks = clock2-clock1;
			double diffms = (diffticks)/(CLOCKS_PER_SEC/1000);

			cout<<i<<" "<<diffms<<endl;
		}
	}

	if(false){

		Cartography carto;
		for(int j = 0; j<100000;j+=1000){

			int clock1,clock2;
			clock1 = clock();
			long c = carto.Count();
			clock2 = clock();
			double diffticks = clock2-clock1;
			double diffms = (diffticks)/(CLOCKS_PER_SEC/1000);

			cout<<j<<" "<<diffms<<" "<<c<<endl;

			for (int i=j; i<j+1000;i++){
				carto.Add(i,i+1,"H20");
			}
		}
	}

	if(false){ // TEST DE AJOUT
		int n = 1000;
		for(int j = 0; j<60000;j+=n){
			int clock1,clock2;

			Cartography carto;

			clock1 = clock();
			for (int i=0; i<j;i++){
				carto.Add(i,i+1,"H20");
			}

			clock2 = clock();
			double diffticks = clock2-clock1;
			double diffms = (diffticks)/(CLOCKS_PER_SEC/1000);

			cout<<j<<" "<<diffms<<endl;
		}
	}
}/**/



