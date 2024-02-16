#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <map>

using std::string;
using std::map;

class TargetGenerator
{
private:
	map<string, ATarget*>	_tarGen;

	TargetGenerator(const TargetGenerator&);
	TargetGenerator & operator=(const TargetGenerator&);
public:
	TargetGenerator(void);
	~TargetGenerator(void);

	void		learnTargetType(ATarget*);
	void		forgetTargetType(const string&);
	ATarget*	createTarget(const string&);
};

#endif
