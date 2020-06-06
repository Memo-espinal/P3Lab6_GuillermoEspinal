#include "Jinete.h"

Jinete::Jinete():Guerrero()
{
	fuerza=30;
	
}
void Jinete::Atacar (Habitantes* vistima ){
	
}
int Jinete:: getVida(){
	return vida;
}
int Jinete:: getFuerza(){
	return fuerza;
}
int Jinete::getAtaque(){
	return ataque;
}

int Jinete::setVida(int Dvida ){
	this-> vida = Dvida;
}
int Jinete::setFuerza(int Dfuerza){
	this->fuerza = Dfuerza;
}
int Jinete::setAtaque(int Dataque){
	//this-> ataque = Dataque;
	ataque= fuerza + vida*0.065;
}

Jinete::~Jinete()
{
}
