#ifndef CIVILIZACION_H
#define CIVILIZACION_H
#include <string>
#include <vector>
#include "Habitantes.h"
#include "Aldeano.h"
#include "Jinete.h"
#include "Guerrero.h"
#include "Arquero.h"

using namespace std;

class Civilizacion
{
	public:
		Civilizacion();
		Civilizacion(string Dnombre);
		
			vector<Habitantes*> getHabitantes();
			void addHabitante(Habitantes*);
			
			string getNombre();
			int getOro();
			int getMadera();
			int getAlimento();
			int getCasas();
			int getCuarteles();
			int getEstablos();
			
			void setNombre(string);
			void setCasas(int);
			void setCuarteles(int);
			void setEstablos(int);
			void setOro(int);
			void setMadera(int);
			void setAlimento(int);
			
		~Civilizacion();
	protected:
		string Nombre;
		int oro=0;
		int madera=0;
		int alimento=0;
		int casas=0;
		int cuarteles=0;
		int establos=0;
		
		vector<Habitantes*>vHabitantes;
		
};

#endif
