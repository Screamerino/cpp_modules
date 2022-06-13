#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <exception>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
    Form(std::string, int, int);
    virtual ~Form();
    Form(Form const &);
    Form &operator=(Form const &);
    const std::string& getName() const;
    bool getSign() const;
    int getSignGrade() const;
    int getExecGrade() const;
    void beSigned(Bureaucrat const &);
    void checkRequirements(Bureaucrat const &) const;
    virtual void execute(Bureaucrat const & executor) const = 0;
    class GradeTooHighException: public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char* what() const throw();
    };
    class FormNotSignedException: public std::exception {
        virtual const char* what() const throw();
    };

private:
    Form();
    const std::string name;
    bool is_signed;
    const int sign_grade;
    const int exec_grade;
};

std::ostream& operator<<(std::ostream& o, Form const& f);

#endif //FORM_HPP
