export module person;

import <string>;
import <iostream>;

export class Person
{
public:
	Person(std::string firstName, std::string lastName)
		: m_firstName{ std::move(firstName) }, m_lastName{ std::move(lastName) } { }

	const std::string& getFirstName() const { return m_firstName; }
	const std::string& getLastName() const { return m_lastName; }

private:
	std::string m_firstName;
	std::string m_lastName;
};