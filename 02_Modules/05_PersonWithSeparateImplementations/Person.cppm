export module person;

import <iostream>;
import <string>;

// Class definition
export class Person
{
public:
	Person(std::string firstName, std::string lastName);

	const std::string& getFirstName() const;
	const std::string& getLastName() const;

private:
	std::string m_firstName;
	std::string m_lastName;
};

// Implementations
Person::Person(std::string firstName, std::string lastName)
	: m_firstName{ std::move(firstName) }, m_lastName{ std::move(lastName) }
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
