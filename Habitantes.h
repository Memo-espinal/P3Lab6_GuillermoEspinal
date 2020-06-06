#ifndef HABITANTES_H
#define HABITANTES_H

class Habitantes
{
	public:
		Habitantes();
		
		virtual int getVida()=0;
	
		
		virtual void setVida(int)=0;
		
		
		//virtual void Atacar(Habitante* vistima)=0;
		
		
		~Habitantes();
	protected:
		int vida;
	
};

#endif
