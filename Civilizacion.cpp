#include "Civilizacion.h"
#include <string>
#include <vector>
#include "Habitantes.h"
#include <iostream>


Civilizacion::Civilizacion()
{
}
Civilizacion::Civilizacion(string Dnombre){
	this->Nombre=Dnombre;
	casas= 2;
	
	alimento=madera=oro=50;
	for (int i = 0 ; i< 5;i++){
		
		Habitantes* nuevo = new Aldeano();
		vHabitantes.push_back(nuevo);
	}
	Habitantes* Jinete_nuevo= new Jinete();
	vHabitantes.push_back(Jinete_nuevo);
}
void Civilizacion::addHabitante(Habitantes* nuevo ){
	vHabitantes.push_back(nuevo);
}
			

vector<Habitantes*> Civilizacion::getHabitantes(){
	return vHabitantes;
}
string Civilizacion::getNombre(){
	return Nombre;
}
int Civilizacion::getOro(){
	return oro;
}
int Civilizacion::getMadera(){
	return madera;
}
int Civilizacion::getAlimento(){
	return alimento;
	
}
int Civilizacion::getCasas(){
	return casas;
}
int Civilizacion::getCuarteles(){
	return cuarteles;
}
int Civilizacion:: getEstablos(){
	return establos;
}

void Civilizacion::setNombre(string nombre){
	this->Nombre=nombre;
	
}
void Civilizacion::setCasas(int Dcasas){
	this->casas=Dcasas;
}
void Civilizacion::setCuarteles(int Dcuarteles){
	this->cuarteles=Dcuarteles;
}
void Civilizacion::setEstablos(int Destablos){
	this->establos=Destablos;
}
void Civilizacion::setOro(int Doro){
	this->oro=Doro;
	
}
void Civilizacion::setMadera(int Dmadera){
	this->madera=Dmadera;
}
void Civilizacion::setAlimento(int Dalimentos){
	this->alimento=Dalimentos;
}

Civilizacion::~Civilizacion()
{
	for (int i=0 ; i < vHabitantes.size();i++){
		delete vHabitantes[i];
		vHabitantes[i]=NULL;
	}
	//delete vHabitantes;
}
