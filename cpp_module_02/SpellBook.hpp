#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

using std::string;
using std::map;

class SpellBook
{
private:
	map<string, ASpell*>	_spellBook;

	SpellBook(const SpellBook&);
	SpellBook&	operator=(const SpellBook&);
public:
	SpellBook(void);
	~SpellBook(void);

	void	learnSpell(ASpell*);
	void	forgetSpell(const string&);
	ASpell*	createSpell(const string&);
};

#endif
