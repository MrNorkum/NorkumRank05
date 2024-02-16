#include "Warlock.hpp"

Warlock::Warlock(void){}
Warlock::Warlock(const Warlock& copy) {*this = copy;}
Warlock& Warlock::operator=(const Warlock& other){(void)other; return (*this);}

void	Warlock::setTitle(const string title) {this->_title = title;}
const string&	Warlock::getName(void) const {return (this->_name);}
const string&	Warlock::getTitle(void) const {return (this->_title);}

Warlock::Warlock(const string name, const string title) : _name(name), _title(title)
{
	cout << getName() << ": This looks like another boring day." << endl;
}

Warlock::~Warlock(void)
{
	cout << getName() << ": My job here is done!" << endl;
}

void	Warlock::introduce(void) const
{
	cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << endl;
}
