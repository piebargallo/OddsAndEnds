import Persona;
import <iostream>;
import <string>;

int main()
{
	Persona persona{ "Toque", "Romulo" };
	std::cout << persona.getNombre() << ", " << persona.getApellido() << std::endl;
	return 0;
}