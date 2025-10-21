#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/ComponenteConcreto.h"
#include "ProgrammingPatterns/Decorator/DecoratorConcretoA.h"
#include "ProgrammingPatterns/Decorator/DecoratorConcretoB.h"

int main() {
	
	ComponenteConcreto* objeto = new ComponenteConcreto();
	DecoratorConcretoA* decoratorA = new DecoratorConcretoA(objeto);
	DecoratorConcretoB* decoratorB = new DecoratorConcretoB(decoratorA);

	objeto->operacion();
	decoratorA->operacion();
	decoratorB->operacion();

	delete objeto;
	delete decoratorA;
	delete decoratorB;
	return 0;
}

