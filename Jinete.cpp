#include "Jinete.h"
#include <iostream>

Jinete::Jinete():Guerrero()
{
	fuerza=30;
	
}
void Jinete::Atacar (Habitantes* vistima ){
	vistima->setVida(vistima->getVida()-getAtaque());
}
int Jinete:: getVida(){
	return vida;
}
int Jinete:: getFuerza(){
	return fuerza;
}
int Jinete::getAtaque(){
	ataque= fuerza + vida*0.065;
	return ataque;
}

void Jinete::setVida(int Dvida ){
	this-> vida = Dvida;
}
void Jinete::setFuerza(int Dfuerza){
	this->fuerza = Dfuerza;
}
void Jinete::setAtaque(int Dataque){
	//this-> ataque = Dataque;
	ataque= fuerza + vida*0.065;
}

Jinete::~Jinete()
{
}
