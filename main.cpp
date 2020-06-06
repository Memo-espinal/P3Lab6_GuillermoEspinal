#include <iostream>
#include "Civilizacion.h"
#include "Habitantes.h"
#include "Aldeano.h"
#include "Guerrero.h"
#include "Jinete.h"
#include "Arquero.h"
#include <string>
#include <vector>

//Crear aldeanoCrear jinete Crear arqueroCrear caballeroConstruir casaConstruir cuartelConstruir establoIr a guerraSiguiente horaSalir

using namespace std;
vector <Civilizacion*> vCivilizaciones;

void ListarCivi(vector<Civilizacion*> civilizaciones ){
	if (civilizaciones.size()>0){
		for (int i=0 ;i< civilizaciones.size(); i++){
		cout << i <<".- " << civilizaciones[i]->getNombre();
		}
	}
	
}
void Ajugar(Civilizacion* Civi){
	vector <int>cola_aldeanos;
	vector <int>cola_Jinetes;
	vector <int> cola_Arqueros;
	vector<int>cola_Caballeros;
	

	//int residentes = Civi->getHabitantes().size();
	int eleccion=0;
	while (eleccion!=9){
		int capacidad = Civi->getCasas()*5;
		int residentes = Civi->getHabitantes().size();
		cout<< "1.- Crear aldeano"<< endl;
		cout<< "2.- Crear jinete"<< endl;
		cout<< "3.- Crear arquero"<< endl;
		cout<< "4.- Crear caballero"<< endl;
		cout<< "5.- Construir casa"<< endl;
		cout<< "6.- Construir cuartel"<< endl;
		cout<< "7.- Construir establo"<< endl;
		cout<< "8.- Ir a guerra"<< endl;
		cout<< "9.- Siguiente hora"<< endl;
		cout<< "10.- Salir"<< endl;
		cin>> eleccion;
		switch(eleccion){
			case 1:{
				int c_validador;
				if (Civi->getAlimento()<25){
					cout<< "Sus recursos no son suficientes";
					
				}else if(residentes==capacidad){
					
					cout << "Ya llego a la capacidad maxima de habitantes"<< endl;
				}else if (residentes<capacidad ){
					
					Habitantes* nuevo = new Aldeano();
					Civi->getHabitantes().push_back(nuevo);
					cola_aldeanos.push_back(1);
					cout << "Se agrego a la cola de creacion"<<endl;
					//cout <<"Se agrego un nuevo aldeano";
				}
				
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				
				break;
			}
			case 5:{
				
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				
				break;
			}
			case 8:{
				
				break;
			}
			case 9:{
				
				break;
			}
			case 10:{
				
				break;
			}
			
		}
	}

	
}



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	
	int resp = 0 ;
	while(resp !=3){
		cout<<"Ingrese que quiere hacer:"<<endl;
		cout<<"1.-Crear un Civilizacion"<<endl;
		cout<<"2.- Jugar"<<endl;
		cout<<"3.-Salir"<<endl;
		cin >> resp;
	}
	switch(resp){
		case 1 : {
			string nombre;
			cout << "Ingrese el nombre de la Civilizacion: "<<endl;
			cin>> nombre;
			Civilizacion* nueva = new Civilizacion(nombre);
			cout << "Civilizacion creada!"<< endl ;
			break;
		}
		case 2 :{
			int elec=0;
			ListarCivi(vCivilizaciones);
			cout << "Elija una :"<< endl;
			cin >>elec;
			while (elec> vCivilizaciones.size()|| elec<=0){
				cout<<"Vuelva a elegir :"<< endl;
				cin>> elec;
			}
			Civilizacion* Civi_actual = vCivilizaciones[elec]; 
			
			
			break;
		}
		case 3:{
			
			break;
		}
	}
	
	
	
	return 0;
}
