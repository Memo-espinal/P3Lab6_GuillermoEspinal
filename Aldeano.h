#ifndef ALDEANO_H
#define ALDEANO_H

#include "Habitantes.h"

class Aldeano : public Habitantes
{
	public:
		Aldeano();
		
			int getVida();
		
			int setVida(int );
			
		~Aldeano();
	protected:
};

#endif
