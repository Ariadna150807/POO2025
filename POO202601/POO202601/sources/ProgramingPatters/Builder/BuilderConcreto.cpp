#include "ProgrammingPatterns/Builder/BuilderConcreto.h"

BuilderConcreto :: BuilderConcreto() {
	producto = new Producto();
}

void BuilderConcreto :: buildParteA() {
	producto->add("Parte A del producto");
}

void BuilderConcreto::buildParteB() {
	producto->add("Parte B del producto");
}

Producto* BuilderConcreto :: getProducto() {
	if (producto) {
		return producto;
	}
	}
	return nullptr;
}