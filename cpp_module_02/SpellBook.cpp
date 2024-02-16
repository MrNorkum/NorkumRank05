#include "SpellBook.hpp"

SpellBook::SpellBook(void) {}
SpellBook::SpellBook(const SpellBook& copy) {*this = copy;}
SpellBook::~SpellBook(void)
{
	for (map<string, ASpell*>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
		delete it->second;
	_spellBook.clear();
}

SpellBook&	SpellBook::operator=(const SpellBook& other) {(void)other; return (*this);}

void	SpellBook::learnSpell(ASpell* spell)
{
	if (!spell)
		return;
	if (_spellBook.find(spell->getName()) == _spellBook.end())
		_spellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(const string& spellName)
{
	if (_spellBook.find(spellName) != _spellBook.end())
		_spellBook.erase(_spellBook.find(spellName));
}

ASpell*	SpellBook::createSpell(const string& spellName)
{
	ASpell* spell = NULL;
	if (_spellBook.find(spellName) != _spellBook.end())
		spell = _spellBook[spellName];
	return (spell);
}
