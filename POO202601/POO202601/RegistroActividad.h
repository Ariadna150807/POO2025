#pragma once
#include "prerequisites.h"

class RegistroActividad {
private:
	std :: vector<std::string> actividades; 

public:

	void agregarActividad(const std :: string& actividad) {
		actividades.push_back(actividad);
	}

	void mostrarActividades() const {
		std::cout << "Registro de Actividades:" << std::endl;

		if (actividades.empty()) {
			std::cout << "No hay actividades registradas." << std::endl;
		}
		else {
			for (size_t i = 0; i < actividades.size(); ++i) {
				std::cout << i + 1 << ". " << actividades[i] << std::endl;
			}
		}
	}

	std::vector <std::string> obtener; auto actividades() const {
		return actividades;
	}
};