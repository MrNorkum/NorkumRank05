#include "ATarget.hpp"

ATarget::ATarget(void) : _type("") {}
ATarget::ATarget(const string type) : _type(type) {}
ATarget::ATarget(const ATarget& copy) {*this = copy;}
ATarget::~ATarget(void) {}

ATarget&	ATarget::operator=(const ATarget& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

const string&	ATarget::getType(void) const {return (this->_type);}

void	ATarget::getHitBySpell(ASpell const & spell) const
{
	cout << getType() << " has been " << spell.getEffects() << "!" << endl;
}
