#pragma once
<<<<<<< Updated upstream

=======
#define _CRT_SECURE_NO_WARNINGS

//Librerias estandar
>>>>>>> Stashed changes
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
<<<<<<< Updated upstream
=======

//Fecha en tiempopo real
struct FechaHora {
	int dia; 
	int mes;
	int anio;
	int hora;
	int min;
	int seg;


void getFechaHora() {
	time_t now = time(0);
	tm* ltm = localtime(&now);
	dia = ltm->tm_mday;
	mes = 1 + ltm->tm_mon;
	anio = 1900 + ltm->tm_year;
	hora = ltm->tm_hour;
	min = ltm->tm_min;
	seg = ltm->tm_sec;
}

std::string toString() const {
	return std::to_string(dia) + "/" +
		std::to_string(mes) + "/" +
		std::to_string(anio) + " " +
		std::to_string(hora) + ":" +
		std::to_string(min) + ":" +
		std::to_string(seg);	
}

};

enum EstadoTicket {
PENDIENTE=1,
EnPROCESO = 2,
COMPLETADO = 3
};

>>>>>>> Stashed changes
