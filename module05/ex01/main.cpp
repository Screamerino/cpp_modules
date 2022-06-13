#include "Bureaucrat.hpp"

int main() {
    std::cout << "Creating common bureaucrat and testing increment and decrement" << std::endl;
    Bureaucrat bob("bob", 100);
    std::cout << bob << std::endl;
    bob.upGrade();
    std::cout << bob << std::endl;
    bob.downGrade();
    std::cout << bob << std::endl << std::endl;

    Bureaucrat boss("boss", 1);
    std::cout << "Creating bureaucrat with max grade" << std::endl;
    try {
        boss.upGrade();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl << std::endl;
    }
    std::cout << "Creating bureaucrat with min grade" << std::endl;

    Bureaucrat redneck("redneck", 150);
    try {
        redneck.downGrade();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl << std::endl;
    }
    std::cout << "Redneck now a new boss" << std::endl;
    redneck = boss;
    std::cout << redneck << std::endl;

    return 0;
}