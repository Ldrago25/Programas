#include "Arreglo.h"
using namespace std;

Arreglo::Arreglo(){
	
	strcpy(nombre,"");
	strcpy(apellido,"");
	edad=20;
}

Arreglo::Arreglo(char *_nombre, char *_apellido, int _edad){
	
	strcpy(nombre,_nombre);
	strcpy(apellido,_apellido);
	edad=_edad;
	
}

	void Arreglo::mostrarD(){
		
		cout<<endl<<"Datos"<<endl;
		cout<<endl<<"___________"<<endl;
		cout<<endl<<"Nombre: "<<nombre<<endl;
		cout<<endl<<"Apellido: "<<apellido<<endl;
		cout<<endl<<"Edad: "<<edad<<endl;
		
	}
