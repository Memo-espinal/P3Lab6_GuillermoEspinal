#ifndef ARQUERO_H
#define ARQUERO_H

#include "Guerrero.h"

class Arquero : public Guerrero
{
	public:
		Arquero();
		
			
		void Atacar(Habitantes*);
		int getVida();
		int getFuerza();
		int getAtaque();
		
		int setVida(int);
		int setFuerza(int);
		int setAtaque();
		
		~Arquero();
	protected:
};

#endif
