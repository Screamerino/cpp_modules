#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm: public Form {
public:
  RobotomyRequestForm(std::string target);
  ~RobotomyRequestForm();
  RobotomyRequestForm(RobotomyRequestForm const &);
  RobotomyRequestForm & operator=(RobotomyRequestForm const &);
  void execute(Bureaucrat const & executor) const;
private:
  RobotomyRequestForm();
  std::string target;
};

#endif // ROBOTOMYREQUESTFORM_HPP
