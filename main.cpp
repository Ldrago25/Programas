#include <iostream>
#include "Arreglo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Arreglo **c= new Arreglo *[5];
	
	for(int i=0; i<5; i++){
		
		c[i]= new Arreglo("Brandon","Vargas",20);
		c[i]->mostrarD();
		
	}
	
	return 0;
}
