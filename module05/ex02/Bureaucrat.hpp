#ifndef CPP_MODULES_BUREAUCRAT_HPP
# define CPP_MODULES_BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat {
public:
    ~Bureaucrat() {};
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const &);
    Bureaucrat & operator=(Bureaucrat const &);
    std::string const &getName(void) const;
    int getGrade(void) const;
    void upGrade(void);
    void downGrade(void);
    void signForm(Form &);
    class GradeTooHighException: public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char* what() const throw();
    };

private:
    Bureaucrat();
    const std::string name;
    int grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &b);

#endif //CPP_MODULES_BUREAUCRAT_HPP
