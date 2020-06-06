#include <iostream>
#include "Civilizacion.h"
#include "Habitantes.h"
#include "Aldeano.h"
#include "Guerrero.h"
#include "Jinete.h"
#include "Arquero.h"
#include "Caballero.h"
#include <string>
#include <vector>
#include <typeinfo>

//Crear aldeanoCrear jinete Crear arqueroCrear caballeroConstruir casaConstruir cuartelConstruir establoIr a guerraSiguiente horaSalir

using namespace std;
vector <Civilizacion*> vCivilizaciones;
char resp='1';
vector <int>cola_aldeanos;
vector <int>cola_Jinetes;
vector <int> cola_Arqueros;
vector<int>cola_Caballeros;

void ListarCivi(vector<Civilizacion*> civilizaciones ){
	if (civilizaciones.size()>0){
		for (int i=0 ;i< civilizaciones.size(); i++){
		cout << i <<".- " << civilizaciones[i]->getNombre()<< endl;
		}
	}
	
}

int Ajugar(Civilizacion* Civi){

	

	//int residentes = Civi->getHabitantes().size();
	int eleccion=0;
//while (eleccion!=9){
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
		//cin>> eleccion;
		cin>> eleccion;
		switch(eleccion){
			case 1:{
			
				if (Civi->getAlimento()<25){
					cout<< "Sus recursos no son suficientes";
					
				}else if(residentes==capacidad){
					
					cout << "Ya llego a la capacidad maxima de habitantes"<< endl;
				}else if (residentes<capacidad ){
					
					//Habitantes* nuevo = new Aldeano();
					//Civi->getHabitantes().push_back(nuevo);
					Civi->setAlimento(Civi->getAlimento()-25);
					cola_aldeanos.push_back(1);
					cout << "Se agrego a la cola de creacion"<<endl;
					cout <<"SHOW ME SIZE DE COLA DE ALDEANOS: "<< cola_aldeanos.size();
					//cout <<"Se agrego un nuevo aldeano";
				}
				
				break;
			}
			case 2:{
				int c_validador=0;
				if (Civi->getAlimento()<75){
					c_validador++;
				}
				if(Civi->getMadera()<5){
					c_validador++;
				}
				if (Civi->getOro()<20){
					c_validador++;
				}
				if (Civi->getEstablos()<1){
					cout<<"No tiene establos para hacerlo"<< endl;
				}else if (c_validador >0){
					cout<< "Sus recursos no son suficientes para hacerlo"<< endl;
				}else if (residentes==capacidad){
					cout << "Ya llego a la capacidad maxima de habitantes"<< endl;
				}else if (residentes<capacidad ){
					Civi->setAlimento(Civi->getAlimento()-75);
					Civi->setMadera(Civi->getMadera()-5);
					Civi->setOro(Civi->getOro()-20);
					cola_Jinetes.push_back(6);
					cout<< "Se agrego a la cola de jinetes"<< endl;
				}
				
				
				break;
			}
			case 3:{
				int c_validador=0;
				if (Civi->getAlimento()<50){
					c_validador++;
				}
				if(Civi->getMadera()<10){
					c_validador++;
				}
				if (Civi->getOro()<10){
					c_validador++;
				}//shh
				if (Civi->getCuarteles()<1){
					cout<<"No tiene establos para hacerlo"<< endl;
				}else if (c_validador >0){
					cout<< "Sus recursos no son suficientes para hacerlo"<< endl;
				}else if (residentes==capacidad){
					cout << "Ya llego a la capacidad maxima de habitantes"<< endl;
				}else if (residentes<capacidad ){
					Civi->setAlimento(Civi->getAlimento()-50);
					Civi->setMadera(Civi->getMadera()-10);
					Civi->setOro(Civi->getOro()-10);
					cola_Arqueros.push_back(4);
					cout<< "Se agrego a la cola de Arqueros"<< endl;
				
				
			}
			break;
		}
			case 4:{
				int c_validador=0;
				if (Civi->getAlimento()<50){
					c_validador++;
				}
				if(Civi->getMadera()<5){
					c_validador++;
				}
				if (Civi->getOro()<15){
					c_validador++;
				}//shh
				if (Civi->getEstablos()<1){
					cout<<"No tiene establos para hacerlo"<< endl;
				}else if (c_validador >0){
					cout<< "Sus recursos no son suficientes para hacerlo"<< endl;
				}else if (residentes==capacidad){
					cout << "Ya llego a la capacidad maxima de habitantes"<< endl;
				}else if (residentes<capacidad ){
					Civi->setAlimento(Civi->getAlimento()-50);
					Civi->setMadera(Civi->getMadera()-5);
					Civi->setOro(Civi->getOro()-15);
					cola_Caballeros.push_back(4);
					cout<< "Se agrego a la cola de Caballeros"<< endl;
				
			
			}
				break;
		}
			case 5:{
				if (Civi->getMadera()<50){
					cout << "No tiene suficiente recursos para ello"<< endl;
				}else {
					Civi->setMadera(Civi->getMadera()-50);
					Civi->setCasas(Civi->getCasas()+1);
					cout <<"Se creo una casa mas "<< endl;
				}
				
				
				break;
			}
			case 6:{
				int c_validador=0;
				if(Civi->getMadera()<150){
					c_validador++;
				}
				if (Civi->getOro()<50){
					c_validador++;
				}
				if (c_validador >0){
					cout<< "Sus recursos no son suficientes para hacerlo"<< endl;
				}else {
					Civi->setMadera(Civi->getMadera()-150);
					Civi->setOro(Civi->getOro()-50); 
					Civi->setEstablos(Civi->getEstablos()+1);
					cout <<"Se creo una Establo "<< endl;
				}
				
				
				break;
			}
			case 7:{
				int c_validador=0;
				if(Civi->getMadera()<200){
					c_validador++;
				}
				if (Civi->getOro()<50){
					c_validador++;
				}
				if (c_validador >0){
					cout<< "Sus recursos no son suficientes para hacerlo"<< endl;
				}else {
					Civi->setMadera(Civi->getMadera()-200);
					Civi->setOro(Civi->getOro()-50); 
					Civi->setCuarteles(Civi->getCuarteles()+1);
					cout <<"Se creo un Cuartel "<< endl;
				}
				
				break;
			}
			case 8:{
				int elec;
//					for (int i =0 ;i<vCivilizaciones;i++){
//						ListarCivi(vCivilizaciones);
//						cout<<"Elija una: "<< endl;
//						cin>> elec;
//					}
					
				break;
			}
			case 9:{
				cout<< "--------------------------------------------------------------------"<< endl;
				cout <<"Avanzar de hora :"<< endl;
				cout <<"TIene esta cantidad de Alimentos: "<< Civi->getAlimento()<< endl;
				cout <<"TIene esta cantidad de Madera: "<< Civi->getMadera()<< endl;
				cout <<"TIene esta cantidad de Oro: "<< Civi->getOro()<< endl;
				cout <<"Tiene esta cantidad de Casas : "<<Civi->getCasas() <<endl;
				cout <<"Tiene esta cantidad de Establos : "<<Civi->getEstablos() <<endl;
				cout <<"Tiene esta cantidad de Cuarteles : "<<Civi->getCuarteles() <<endl;
				cout <<"Tiene Esta cantidad de Habitantes : "<<Civi->getHabitantes().size()<<endl;
				cout << "Su capacidad de Habitantes es de : "<< capacidad<< endl;
				cout<< "Horas para que esten los Aldeanos: ";
				if (cola_aldeanos.size()==0){
					cout<<0;
				}else{
					for (int i = 0 ; i<cola_aldeanos.size() ; i++){
						cout << cola_aldeanos[i]<< " ";
					} 
				}
				
				cout << endl;
				
				cout<< "Horas para que esten los Jinetes: ";
				if (cola_Jinetes.size()==0){
					cout<<0;
				}else{
					for (int i = 0 ; i<cola_Jinetes.size() ; i++){
						cout << cola_Jinetes[i]<< " ";
					} 
				}
				cout << endl;
				
				cout<< "Horas para que esten los Caballeros: " ;
				if (cola_Caballeros.size()==0){
					cout<<0;
				}else{
					for (int i = 0 ; i<cola_Caballeros.size() ; i++){
						cout << cola_Caballeros[i]<< " ";
					} 
				}
				cout << endl;
				
				cout<< "Horas para que esten los Arqueros: " ;
				if (cola_Arqueros.size()==0){
					cout<<0;
				}else{
					for (int i = 0 ; i<cola_Arqueros.size() ; i++){
						cout << cola_Arqueros[i]<< " ";
					} 
				}
				cout << endl;	
				cout<< "------------------------------------------------------------------------------"<< endl;
				
				int aldeanos_activos=0;
				for (int i =0 ; i < Civi->getHabitantes().size(); i++){
					
					if (typeid(Aldeano)==typeid(*Civi->getHabitantes()[i])){
						
						aldeanos_activos++;
					}
					
				}
				//cout << " SHOW ME ALDENOS ACTIVOS "<<aldeanos_activos << endl;
				// SUMA DE RECURSOS POR HORA
				//cout << "SHOW ME ALIMENTOS AHORITA   " << Civi->getAlimento();
				Civi->setAlimento((5*aldeanos_activos)+Civi->getAlimento());
				//cout << "  SHOW ME ALIMENTOS DESPUES    "<< Civi->getAlimento();
				Civi->setMadera(4*aldeanos_activos+Civi->getMadera());
				Civi->setOro(3*aldeanos_activos+Civi->getOro());
				
				//Resta de las horas a las colas
				for (int i = 0 ; i < cola_aldeanos.size(); i ++){
					cola_aldeanos[i]-=1;
					if (cola_aldeanos[i]==0){
						cola_aldeanos.erase(cola_aldeanos.begin()+i);
						Habitantes* aldeano = new Aldeano();
						Civi->addHabitante(aldeano);
					}
				}
				for (int i = 0 ; i < cola_Arqueros.size(); i ++){
					cola_Arqueros[i]-=1;
					if (cola_Arqueros[i]==0){
						cola_Arqueros.erase(cola_Arqueros.begin()+i);
						Habitantes* arquero= new Arquero();
						Civi->addHabitante(arquero);
					}
				}
				for (int i = 0 ; i < cola_Caballeros.size(); i ++){
					cola_Caballeros[i]-=1;
					if (cola_Caballeros[i]==0){
						cola_Caballeros.erase(cola_Caballeros.begin()+i);
						Habitantes* caballero = new Caballero();
						Civi->addHabitante(caballero);
					}
				}
				for (int i = 0 ; i < cola_Jinetes.size(); i ++){
					cola_Jinetes[i]-=1;
					if (cola_Jinetes[i]==0){
						cola_Jinetes.erase(cola_Jinetes.begin()+i);
						Habitantes* jinete = new Jinete();
						Civi->addHabitante(jinete);
					}
				}
					
				break;
			}
			case 10:{
			
				
				break;
			}
			
		}
	//}

	return eleccion;
}

void Aguerriar(Civilizacion* Civi_atacante,Civilizacion* Civi_defensora ){
	vector<Guerrero*>guerreros;
	for (int i =0 ; i<Civi_atacante->getHabitantes().size();i++){
		if (typeid(Guerrero)==typeid(*Civi_atacante->getHabitantes()[i])){
			Guerrero* ptguerrero= dynamic_cast<Guerrero*>(Civi_atacante->getHabitantes()[i]);
			guerreros.push_back(ptguerrero);
		}
	}
	for (int i = 0 ; i<guerreros.size(); i ++){
		//guerreros[i]->Atacar(Civi_defensora[i]);
	}
}



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {


//	char resp = '1' ;
	cout <<"Bienvenido"<< endl;
	
	//do{
	while (resp!='0'){
		cout<<"Ingrese que quiere hacer:"<<endl;
		cout<<"1.-Crear un Civilizacion"<<endl;
		cout<<"2.- Jugar"<<endl;
		cout<<"3.-Salir"<<endl;
		cin >> resp;
	
		switch(resp){
			case '1' : {
				string nombre;
				cout << "Ingrese el nombre de la Civilizacion: "<<endl;
				getline(cin,nombre);
				getline(cin,nombre);
				Civilizacion* nueva = new Civilizacion(nombre);
				vCivilizaciones.push_back(nueva);
				cout << "Civilizacion creada!"<< endl ;
				break;
			}
			case '2' :{
				int elec=0;
				ListarCivi(vCivilizaciones);
				cout << "Elija una :"<< endl;
				cin >>elec;
				while (elec> vCivilizaciones.size()|| elec<0){
					cout<<"Vuelva a elegir :"<< endl;
					cin>> elec;
				}
				Civilizacion* Civi_actual = vCivilizaciones[elec]; 
				
				int estemen =Ajugar(Civi_actual);
				while (estemen !=10){
					estemen=Ajugar(Civi_actual);
				}
				
				
				break;
			}
			case '3':{
				
				for (int i = 0 ; i < vCivilizaciones.size(); i++){
					delete vCivilizaciones[i];
					vCivilizaciones[i]=NULL;
					
				}
				//delete vCivilizaciones ;
				
				break;
			}
			default: {
				
				break;
			}
		}
			
		}
	
//		cout<<"Ingrese que quiere hacer:"<<endl;
//		cout<<"1.-Crear un Civilizacion"<<endl;
//		cout<<"2.- Jugar"<<endl;
//		cout<<"3.-Salir"<<endl;
//		cin >> resp;
		
	//}while (resp >0);
		
	
	
	
	
	return 0;
}
