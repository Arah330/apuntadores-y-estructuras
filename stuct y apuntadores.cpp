#include<iostream>
#include<conio.h>
using namespace std;
struct elementos {
	char color[15];
	int tamano;
	char genero[15];
};
struct prendas{
	char nombre[15];
	int piezas;
	char caract;
	struct elementos elem;
};
int main(int argc,char**argv){
	cout<<"******Prendas  de  vestir********"<< endl;
	struct prendas R1[5];
	
	struct prendas*apuntador;
	
	apuntador=&R1[0];
	
	for (int i=0;i<2;i++){
		
		cout<<"nombre: ";
		cin.getline(R1[i].nombre,15,'\n');
		cout<<"piezas: ";
		cin>>R1[i].piezas;
		cout<<"caracteristicas:";
		fflush(stdin);
		cin.getline(R1[i].elem.color,15,'\n');	
	}
	cout<<"prenda  registrada "<<apuntador->nombre<< endl;;
	cout<<"piezas guardadas:  "<<apuntador->piezas<< endl;;
	cout<<"medida guardada:  "<<apuntador->elem.color<< endl;;
	getch();
	
	return 0;
	
}
