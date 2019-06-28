#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

class					Template
{
	public:
		Template(void);
		Template(int const var);
		Template(Template const &src);
		~Template(void);

		Template &	operator = (const Template &rhs);

		int			getVar(void) const;
		void		setVar(int var);

	private:
		int			_var;

};

std::ostream	&operator << (std::ostream &o, Template const &i);

#endif
