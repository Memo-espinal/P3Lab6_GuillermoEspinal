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
	ataque= fuerza + vida*0.095;
	return ataque;
}

void Caballero::setVida(int Dvida ){
	this-> vida = Dvida;
}
void Caballero::setFuerza(int Dfuerza){
	this->fuerza = Dfuerza;
}
void Caballero::setAtaque(int Dataque){
	this-> ataque = Dataque;

}

Caballero::~Caballero()
{
}
