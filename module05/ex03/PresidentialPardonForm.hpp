#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm: public Form {
public:
  PresidentialPardonForm(std::string target);
  ~PresidentialPardonForm();
  PresidentialPardonForm(PresidentialPardonForm const &);
  PresidentialPardonForm & operator=(PresidentialPardonForm const &);
  void execute(Bureaucrat const & executor) const;
private:
  PresidentialPardonForm();
  std::string target;
};

#endif // PRESIDENTIALPARDONFORM_HPP
