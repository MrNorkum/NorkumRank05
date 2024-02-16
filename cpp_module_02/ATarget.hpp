#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

using std::cout;
using std::endl;
using std::string;

class ATarget
{
protected:
	string	_type;
public:
	ATarget(void);
	ATarget(const string);
	ATarget(const ATarget&);
	virtual ~ATarget(void);
	ATarget&	operator=(const ATarget&);

	const string&		getType(void) const;
	virtual ATarget*	clone(void) const = 0;
	void	getHitBySpell(const ASpell& spell) const;
};

#endif
