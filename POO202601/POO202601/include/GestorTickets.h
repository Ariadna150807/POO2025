#include "Prerequisites.h"
#include "Ticket.h"
#pragma once	

class GestorTickets {
public:

	GestorTickets() = default;
	~GestorTickets() = default;


	void agregarTicket(const Ticket& ticket) {
		tickets.push_back(ticket);
	}

	void mostrarTickets() const {
		if (m_tickets.empty()) {
			std::cout << "No hay tickets disponibles" << std::endl;
			return;
		}
	}
}

bool eliminarTicket(int id) {
	for (auto it = m_tickets.begin(); 
	        it != m_tickets.end(); 
			++it) {
		    if (it->getId() == id) {
			m_tickets.erase(it);
			return true;
		}
	}

	return false;	
}
		


private:
		std::vector<Ticket> m_tickets;
		};
