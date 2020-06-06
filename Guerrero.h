#ifndef GUERRERO_H
#define GUERRERO_H

#include "Habitantes.h"

class Guerrero : public Habitantes
{
	public:
		Guerrero();
			
			virtual void Atacar(Habitantes* )=0;
			
			virtual int getVida();
			virtual int getFuerza()=0;
			virtual int getAtaque()=0;
			
			virtual void setVida(int);
			virtual void setFuerza(int)=0;
			virtual void setAtaque(int)=0;
			
		~Guerrero();
	protected:
		int fuerza;
		int ataque;
		
		
};

#endif
