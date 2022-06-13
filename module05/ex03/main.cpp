#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    std::cout << "Creating common bureaucrats" << std::endl;
    Bureaucrat bob("bob", 100);
    Bureaucrat boss("boss", 1);
    std::cout << "Creating Shrubbery Creation Form" << std::endl;
    ShrubberyCreationForm a("aboba");
    std::cout << "Bob try execute form with no sign" << std::endl;
    bob.executeForm(a);
    std::cout << std::endl << "Let's sign form" << std::endl;
    bob.signForm(a);
    std::cout << "and execute it" << std::endl;
    bob.executeForm(a);
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    std::cout << "Creating Robotomy Request Form" << std::endl;
    RobotomyRequestForm b("tergat");
    std::cout << "Bob try execute form with no sign" << std::endl;
    bob.executeForm(b);
    std::cout << std::endl << "Bob try to sign it" << std::endl;
    bob.signForm(b);
    std::cout << std::endl << "Boss try to sign it" << std::endl;
    boss.signForm(b);
    std::cout << "and execute it" << std::endl;
    boss.executeForm(b);
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    std::cout << "Creating Presidential Pardon Form" << std::endl;
    PresidentialPardonForm c("Me");
    std::cout << "Bob try execute form with no sign" << std::endl;
    bob.executeForm(c);
    std::cout << std::endl << "Bob try to sign it" << std::endl;
    bob.signForm(c);
    std::cout << std::endl << "Boss try to sign it" << std::endl;
    boss.signForm(c);
    std::cout << "and execute it" << std::endl;
    boss.executeForm(c);
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    return 0;
}