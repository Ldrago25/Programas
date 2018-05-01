#ifndef ARREGLO_H
#define ARREGLO_H
#include <iostream>
#include <string.h>
class Arreglo
{
	private:
		char nombre[50];
		char apellido[50]; 
		int edad;
		
	public:
		Arreglo(char *, char *, int);
		Arreglo();
		 void mostrarD();
		
	protected:
};

#endif
