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
		
		int setVida(int);
		int setFuerza(int);
		int setAtaque(int);
		
		
		~Jinete();
	protected:
};

#endif
