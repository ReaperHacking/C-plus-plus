#include <iostream>

void op_function(int num1, int num2, char op) {
    if (op == '+') {
        std::cout << num1 + num2;
    }
    else if (op == '-') {
        std::cout << num1 - num2;
    }
    else if (op == '*') {
        std::cout << num1 * num2;
    }
    else if (op == '/') {
        std::cout << num1 / num2;
    }
    else {
        std::cout << "Sorry, INVALID OPERATOR ERROR!";
    }
}

int main() {
    std::cout << "Calculator!" << std::endl;

    int num1, num2;
    char op;

    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter an operator: ";
    std::cin >> op;

    std::cout << "Enter another number: ";
    std::cin >> num2;

    op_function(num1, num2, op);

    return 0;
}
