import person;

import <iostream>;
import <string>;

int main()
{
	Person person{ "Kole", "Webb" };
	std::cout << person.getLastName() << ", " << person.getFirstName() << std::endl;
	return 0;
}
