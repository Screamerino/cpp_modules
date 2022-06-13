#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
    Form("RobotomyRequestForm", 72, 45), target(target) {};

RobotomyRequestForm::~RobotomyRequestForm() {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s):
    Form(s.getName(), s.getSignGrade(), s.getExecGrade()), target(s.target) {};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &s) {
  if (this != &s) {
    Form::operator=(s);
    target = s.target;
  }
  return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
  try {
    checkRequirements(executor);
  }
  catch (std::exception& e) {
    throw;
  }
  std::cout << "ZZZzzzzzzzHHHHhhhhhh.....@#$%^!@$...Ufff..."
    << target << " has been robotomized successfully 50% of the time"
    << std::endl;
}

