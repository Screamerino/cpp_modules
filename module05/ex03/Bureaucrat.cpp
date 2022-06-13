#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name) {
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b):
    name(b.getName()), grade(b.getGrade()) {};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b) {
    if (this != &b) {
        const_cast<std::string &>(name) = b.getName();
        grade = b.getGrade();
    }
    return *this;
}

std::string const &Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::upGrade() {
    if (grade - 1 < 1)
        throw GradeTooLowException();
    --grade;
}

void Bureaucrat::downGrade() {
    if (grade + 1 > 150)
        throw GradeTooHighException();
    ++grade;
}

void Bureaucrat::signForm(Form &f) {
    try {
        f.beSigned(*this);
        std::cout << name << " signed " << f.getName() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << name << " couldn't sign " << f.getName()
                  << " because " << e.what() << std::endl;
    }
    catch (const char* s) {
        std::cout << name << " couldn't sign " << f.getName()
                  << " because " << s << std::endl;
    }
}

void Bureaucrat::executeForm(Form &f) {
  try {
    f.execute(*this);
    std::cout << name << " executed " << f.getName() << std::endl;
  }
  catch (std::exception& e) {
    std::cout << name << " couldn't execute " << f.getName() << " because "
              << e.what() << std::endl;
  }
}



std::ostream &operator<<(std::ostream &o, Bureaucrat const &b) {
    o << b.getName() << ", bureaucrat grade " << b.getGrade();
    return o;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade too low";
}