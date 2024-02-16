#include "ASpell.hpp"

ASpell::ASpell(void) : _name(""), _effects("") {}
ASpell::ASpell(const string name, const string effects) : _name(name), _effects(effects) {}
ASpell::ASpell(const ASpell& copy) {*this = copy;}
ASpell::~ASpell(void) {}

ASpell&	ASpell::operator=(const ASpell& other)
{
	if (this != &other)
	{
		this->_name = other.getName();
		this->_effects = other.getEffects();
	}
	return (*this);
}

const string&	ASpell::getName(void) const {return (this->_name);}

const string&	ASpell::getEffects(void) const {return (this->_effects);}

void	ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}
