#ifndef JINETE_H
#define JINETE_H

#include "Guerrero.h"

class Jinete : public Guerrero
{
	public:
		Jinete();
		
		void Atacar(Habitantes*);
		
		int getVida();
		int getFuerza();
		int getAtaque();
		
		void setVida(int);
		void setFuerza(int);
		void setAtaque(int);
		
		
		~Jinete();
	protected:
};

#endif
