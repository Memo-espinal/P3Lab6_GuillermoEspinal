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
		
		void setVida(int);
		void setFuerza(int);
		void setAtaque(int);
		
		~Caballero();
	protected:
};

#endif
