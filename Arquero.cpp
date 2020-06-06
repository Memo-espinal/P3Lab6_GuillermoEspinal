#include "Arquero.h"

Arquero::Arquero()
{
}
void Arquero::Atacar (Habitantes* vistima ){
	
	
}
int Arquero:: getVida(){
	return vida;
}
int Arquero:: getFuerza(){
	return fuerza;
}
int Arquero::getAtaque(){
	ataque= fuerza + vida*0.085;
	return ataque;
}

void Arquero::setVida(int Dvida ){
	this-> vida = Dvida;
}
void Arquero::setFuerza(int Dfuerza){
	this->fuerza = Dfuerza;
}
void Arquero::setAtaque(int Dataque){
	//this-> ataque = Dataque;
	this->ataque = Dataque;
	
}


Arquero::~Arquero()
{
}
