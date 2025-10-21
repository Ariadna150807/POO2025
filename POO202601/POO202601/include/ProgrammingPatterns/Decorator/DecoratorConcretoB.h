#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Decorador.h"

class
	DecoratorConcretoB : public Decorador {
public:
	DecoratorConcretoB(Componente* _componente) : Decorador(_componente) {}	
	~DecoratorConcretoB() = default;

	void 
		operacion() override {
		Decorador::operacion();
		std::cout << "DecoradorConcretoB: Agregando funcionalidad B" << std::endl;
	}

};