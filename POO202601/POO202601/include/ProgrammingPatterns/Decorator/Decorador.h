#pragma once
#include "ProgrammingPatterns/Decorator/Componente.h"

class
	Decorador : public Componente {
public:
	Decorador(Componente* componente) : componente(componente) {}
	~Decorador() = default;

	void
		operacion() override {
		componente->operacion();
	}

private:
	Componente* componente;
};
