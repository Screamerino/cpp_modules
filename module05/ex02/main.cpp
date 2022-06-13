#include "Bureaucrat.hpp"

int main() {
    std::cout << "Creating common bureaucrats" << std::endl;
    Bureaucrat bob("bob", 100);
    Bureaucrat boss("boss", 1);
    std::cout << "Creating some forms" << std::endl;
    Form a("aboba", 100, 50);
    Form b("zxc", 5, 2);

    std::cout << std::endl << "Trying to sign form aboba" << std::endl;
    bob.signForm(a);
    boss.signForm(a);

    bob.signForm(b);
    boss.signForm(b);

    return 0;
}