#include "Prerequisites.h"
#include "ProgrammingPatterns/Builder/Builder.h"
#include "ProgrammingPatterns/Builder/BuilderConcreto.h"
#include "ProgrammingPatterns/Builder/Director.h"

int main() {
	Builder* builder = new BuilderConcreto();
	Director* director = new Director(builder);

	director->construct();

	Producto* producto = builder->getProducto();
	producto->show();

	delete producto;
	delete director;
	delete builder;
	return 0;
}

