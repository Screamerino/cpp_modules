#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
    Form("PresidentialPardonForm", 25, 5), target(target) {};

PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s):
   Form(s.getName(), s.getSignGrade(), s.getExecGrade()), target(s.target) {};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &s) {
  if (this != &s) {
    Form::operator=(s);
    target = s.target;
  }
  return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
  try {
    checkRequirements(executor);
  }
  catch (std::exception& e) {
    throw;
  }
  std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

