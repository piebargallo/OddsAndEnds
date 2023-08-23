import person;

int main()
{
	Person person{ "Kole", "Webb" };
	std::cout << person.getLastName() << ", " << person.getFirstName() << std::endl;
	return 0;
}