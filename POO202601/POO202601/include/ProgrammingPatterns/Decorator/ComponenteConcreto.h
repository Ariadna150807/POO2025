#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Componente.h"

class
	ComponenteConcreto {
public:
	ComponenteConcreto() = default;
	~ComponenteConcreto() = default;

	virtual void
		operacion() {
		std::cout << "ComponenteConcreto: Realizando Operación Concreta" << std::endl;
	}

};