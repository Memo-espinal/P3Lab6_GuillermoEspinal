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
	return ataque;
}

int Arquero::setVida(int Dvida ){
	this-> vida = Dvida;
}
int Arquero::setFuerza(int Dfuerza){
	this->fuerza = Dfuerza;
}
int Arquero::setAtaque(){
	//this-> ataque = Dataque;
	ataque= fuerza + vida*0.085;
}


Arquero::~Arquero()
{
}
