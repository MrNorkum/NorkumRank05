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
	for (map<string, ASpell*>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
		delete it->second;
	_spellBook.clear();
}

void	Warlock::introduce(void) const
{
	cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	if (!spell)
		return;
	if (_spellBook.find(spell->getName()) == _spellBook.end())
		_spellBook[spell->getName()] = spell->clone();
}

void	Warlock::forgetSpell(const string spellName)
{
	if (_spellBook.find(spellName) != _spellBook.end())
		_spellBook.erase(_spellBook.find(spellName));
}

void	Warlock::launchSpell(const string spellName, const ATarget& target)
{
	if (_spellBook.find(spellName) != _spellBook.end())
		_spellBook[spellName]->launch(target);
}
