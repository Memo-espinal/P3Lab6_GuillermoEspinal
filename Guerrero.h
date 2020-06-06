#ifndef GUERRERO_H
#define GUERRERO_H

#include "Habitantes.h"

class Guerrero : public Habitantes
{
	public:
		Guerrero();
			
			virtual void Atacar(Habitantes* )=0;
			
			virtual int getVida()=0;
			virtual int getFuerza()=0;
			virtual int getAtaque()=0;
			
			virtual int setVida(int)=0;
			virtual int setFuerza(int)=0;
			virtual int setAtaque(int)=0;
			
		~Guerrero();
	protected:
		int fuerza;
		int ataque;
		
		
};

#endif
