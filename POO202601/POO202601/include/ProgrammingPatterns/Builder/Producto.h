#pragma once
#include "Prerequisites.h"

class Producto {

public:

	Producto() = default;
	~Producto() = default;	
	void add (const std::string& parte) {
		partes.push_back(parte);
	}

	void show () const {
		std::cout << "Producto partes: " << std::endl;
		for (const auto& parte : partes) {
			std::cout << parte << std::endl;
		}
	}

private: 
	std::vector< std::string> partes;	


};