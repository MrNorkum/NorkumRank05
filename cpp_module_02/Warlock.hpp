#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <map>
#include "SpellBook.hpp"

using std::cout;
using std::endl;
using std::string;

class Warlock
{

private:
	string		_name;
	string		_title;
	SpellBook	_spellBook;

	Warlock(void);
	Warlock(const Warlock&);
	Warlock&	operator=(const Warlock&);
public:
	Warlock(const string, const string);
	~Warlock(void);

	void			setTitle(const string);
	const string&	getName(void) const;
	const string&	getTitle(void) const;
	void			introduce(void) const;
	void			learnSpell(ASpell*);
	void			forgetSpell(const string);
	void			launchSpell(const string, const ATarget&);
};

#endif
