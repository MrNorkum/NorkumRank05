#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Warlock
{
private:
	string	_name;
	string	_title;

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
};

#endif
