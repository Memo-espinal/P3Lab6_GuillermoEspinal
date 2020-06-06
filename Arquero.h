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
		
		void setVida(int);
		void setFuerza(int);
		void setAtaque(int);
		
		~Arquero();
	protected:
};

#endif
