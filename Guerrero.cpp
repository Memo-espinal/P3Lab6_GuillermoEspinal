#include "Guerrero.h"

Guerrero::Guerrero()
{
}
 void Guerrero:: Atacar(Habitantes* vistima){
	
}
 int  Guerrero::getVida(){
	return vida;
}

 int Guerrero:: setVida(int Dvida){
	this->vida = Dvida;
}

 int Guerrero::getFuerza(){
	return fuerza;
}
 int Guerrero::getAtaque(){
	return ataque;
}

 int Guerrero::setFuerza(int Dfuerza){
	this->fuerza=Dfuerza;
}
 int Guerrero::setAtaque(int Dataque){
	this->ataque=Dataque;
}

Guerrero::~Guerrero()
{
}
