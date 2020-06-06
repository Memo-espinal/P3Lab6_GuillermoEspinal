#ifndef CABALLERO_H
#define CABALLERO_H

#include "Guerrero.h"

class Caballero : public Guerrero
{
	public:
		Caballero();
		
		void Atacar(Habitantes*);
		int getVida();
		int getFuerza();
		int getAtaque();
		
		int setVida(int);
		int setFuerza(int);
		int setAtaque();
		
		~Caballero();
	protected:
};

#endif
