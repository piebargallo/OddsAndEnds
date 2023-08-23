module person;

Person::Person(std::string firstName, std::string lastName)
	: m_firstName{ move(firstName) }, m_lastName{ move(lastName) }
{
}

const std::string& Person::getFirstName() const
{
	return m_firstName;
}

const std::string& Person::getLastName() const
{
	return m_lastName;
}
