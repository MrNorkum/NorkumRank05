#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) {}
TargetGenerator::TargetGenerator(const TargetGenerator& copy) {*this = copy;}
TargetGenerator::~TargetGenerator(void)
{
	for (map<string, ATarget*>::iterator it = _tarGen.begin(); it != _tarGen.end(); ++it)
		delete it->second;
	_tarGen.clear();
}

TargetGenerator&	TargetGenerator::operator=(const TargetGenerator& other) {(void)other; return (*this);}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	if (!target)
		return;
	if (_tarGen.find(target->getType()) == _tarGen.end())
		_tarGen[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(const string& targetName)
{
	if (_tarGen.find(targetName) != _tarGen.end())
		_tarGen.erase(_tarGen.find(targetName));
}

ATarget*	TargetGenerator::createTarget(const string& targetName)
{
	ATarget* target = NULL;
	if (_tarGen.find(targetName) != _tarGen.end())
		target = _tarGen[targetName];
	return (target);
}
