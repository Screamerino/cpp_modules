#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain {
public:
	Brain( void );
	~Brain( void );
	Brain( Brain const & );
	Brain & operator=( Brain const & );

private:
	std::string	ideas[100];
};

#endif