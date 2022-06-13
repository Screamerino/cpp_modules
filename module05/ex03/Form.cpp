#include "Form.hpp"

Form::Form(std::string name, int sign_grade, int exec_grade):
  name(name), is_signed(false), sign_grade(sign_grade), exec_grade(exec_grade) {
  if (sign_grade > 150 || exec_grade > 150)
    throw GradeTooLowException();
  else if (sign_grade < 1 || exec_grade < 1)
    throw GradeTooHighException();
  std::cout << "Form " << name << " created" << std::endl;
}

Form::~Form() {
  std::cout << "Form " << name << " destroyed" << std::endl;
}

Form::Form(const Form &f): name(f.name), is_signed(true),
                            sign_grade(f.sign_grade),
                            exec_grade(f.exec_grade) {
  std::cout << "Form was copied from Form " << f.name << std::endl;
}

Form &Form::operator=(const Form &f) {
  if (this != &f) {
    const_cast<std::string&>(name) = f.name;
    is_signed = f.is_signed;
    const_cast<int&>(sign_grade) = f.sign_grade;
    const_cast<int&>(exec_grade) = f.exec_grade;
  }
  return *this;
}

const std::string &Form::getName() const {
  return name;
}

bool Form::getSign() const {
  return is_signed;
}

int Form::getSignGrade() const {
  return sign_grade;
}

int Form::getExecGrade() const {
  return exec_grade;
}
void Form::beSigned(Bureaucrat const &b) {
  if (sign_grade < b.getGrade())
    throw GradeTooLowException();
  if (is_signed)
    throw "Form is already signed";
  is_signed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
  return "Form grade too high";
}
const char *Form::GradeTooLowException::what() const throw() {
  return "Form grade too low";
}

const char *Form::FormNotSignedException::what() const throw() {
  return "Form not signed";
}

void Form::checkRequirements(const Bureaucrat &b) const {
  if (exec_grade < b.getGrade())
    throw GradeTooLowException();
  if (!is_signed)
    throw FormNotSignedException();
}

std::ostream& operator<<(std::ostream& o, Form const& f) {
  o << "Form name: " << f.getName() << "; "
    << "Sign state: " << f.getSign() << "; "
    << "Sign grade: " << f.getSignGrade() << "; "
    << "Execute grade: " << f.getExecGrade();
  return o;
}