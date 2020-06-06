#include "Caballero.h"

Caballero::Caballero()
{
}
void Caballero::Atacar (Habitantes* vistima ){
	
}
int Caballero:: getVida(){
	return vida;
}
int Caballero:: getFuerza(){
	return fuerza;
}
int Caballero::getAtaque(){
	return ataque;
}

int Caballero::setVida(int Dvida ){
	this-> vida = Dvida;
}
int Caballero::setFuerza(int Dfuerza){
	this->fuerza = Dfuerza;
}
int Caballero::setAtaque(){
	//this-> ataque = Dataque;
	ataque= fuerza + vida*0.095;
}

Caballero::~Caballero()
{
}
