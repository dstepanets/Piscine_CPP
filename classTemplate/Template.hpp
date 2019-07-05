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

		class	Exception : public std::exception
		{
		public:
			Exception(void);
			Exception(const Exception &src);
			~Exception(void) throw();
			Exception& operator = (const Exception &rhs);
			virtual const char* what() const throw();
		};

		int			getVar(void) const;
		void		setVar(int var);

	private:
		int			_var;

};

std::ostream	&operator << (std::ostream &o, Template const &i);

#endif
