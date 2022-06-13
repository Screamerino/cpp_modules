#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form {
public:
  ShrubberyCreationForm(std::string target);
  ~ShrubberyCreationForm();
  ShrubberyCreationForm(ShrubberyCreationForm const &);
  ShrubberyCreationForm & operator=(ShrubberyCreationForm const &);
  void execute(Bureaucrat const & executor) const;
private:
  ShrubberyCreationForm();
  std::string target;
};

#endif // SHRUBBERYCREATIONFORM_HPP
