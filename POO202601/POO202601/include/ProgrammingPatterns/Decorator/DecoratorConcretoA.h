#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Decorador.h"

class
	DecoratorConcretoA : public Decorador {
public:
	DecoratorConcretoA(Componente* _componente) : Decorador(_componente) {}
	~DecoratorConcretoA() = default;

	void
		operacion() override {
		Decorador::operacion();
		std::cout << "DecoradorConcretoB: Agregando funcionalidad A" << std::endl;
	}

};