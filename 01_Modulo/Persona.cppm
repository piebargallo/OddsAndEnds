export module Persona;
import <iostream>;
import <string>;

export class Persona
{
private:
	std::string m_nombre;
	std::string m_apellido;
public:
	Persona(std::string nombre, std::string apellido)
		: m_nombre{ nombre }, m_apellido{ apellido } {}

	const std::string& getNombre() const { return m_nombre; }
	const std::string& getApellido() const { return m_apellido; }
};