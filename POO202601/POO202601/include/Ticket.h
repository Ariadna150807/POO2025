#include "Prerequisites.h"

class Ticket {
public:

	Ticket(int id, const std::string& titulo,
		const std::string& descripcion,
	EstadoTicket estado) :
		m_id(id),
		m_titulo(titulo),
		m_descripcion(descripcion),
		m_estado(estado){ 
		m_FechaHora.getFechaHora();
}	

	~Ticket() = default;

	FechaHora m_fechaHora;

	int
		getId() const {
		return m_id;
	}

	std::string
		getTitulo() const {
		return m_titulo;
	}

	std::string
		getDescripcion() const {
		return m_descripcion;
	}

	EstadoTicket
		getEstado() const {
		return m_estado;
	}

	void setTitulo(const std::string& titulo) {
		m_titulo = titulo;
	}

	void setDescripcion(const std::string& descripcion) {
		m_descripcion = descripcion;
	}

	bool cambiarEstado(EstadoTicket nuevoEstado) {
		switch (m_estado) {
		case PENDIENTE:
			if (nuevoEstado == EnPROCESO) {
				m_estado = nuevoEstado;
				return true;
			}
			break;
		case EnPROCESO:
			if (nuevoEstado == PENDIENTE || nuevoEstado == COMPLETADO) {
				m_estado = nuevoEstado;
				return true;
			}
			break;

		case COMPLETADO:
			// No se puede cambiar el estado desde "Completado"
			return false;
		}
		return false;
	}

	void mostrarTicket() const {
		std::cout << "ID: " << m_id << "\n"
			<< "Titulo: " << m_titulo << "\n"
			<< "Descripcion: " << m_descripcion << "\n"
			<< "Estado: " << EstadoTicket(m_estado) << "\n"
			<< "Fecha y Hora: " << m_FechaHora.toString() << "\n";
	}

private:
	int m_id;	
	std::string m_titulo;	
	std::string m_descripcion;	
	EstadoTicket m_estado;	

std::string estadoToTicket(EstadoTicket estado) {
	switch (estado) {
		case PENDIENTE: 
			return "Pendiente";
		case EnPROCESO: 
			return "En Proceso";
		case COMPLETADO: 
			return "Completado";
		default: 
			return "Desconocido";
	}
}
	FechaHora m_FechaHora;	
};