#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

using std::cout;
using std::endl;
using std::string;

class ASpell
{
protected:
	string	_name;
	string	_effects;
public:
	ASpell(void);
	ASpell(const string, const string);
	ASpell(const ASpell&);
	virtual ~ASpell(void);
	ASpell&	operator=(const ASpell&);

	const string&	getName(void) const;
	const string&	getEffects(void) const;

	virtual ASpell*	clone(void) const = 0;
	void			launch(const ATarget&) const;
};

#endif
