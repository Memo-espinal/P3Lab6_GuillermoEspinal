#include "Aldeano.h"

Aldeano::Aldeano():Habitantes()
{
	//fuerza=0;
	//ataque=0;
}
int Aldeano ::getVida(){
	return vida ;	
}
	
int Aldeano::setVida(int Dvida){
	vida = Dvida;
}

Aldeano::~Aldeano()
{
}
