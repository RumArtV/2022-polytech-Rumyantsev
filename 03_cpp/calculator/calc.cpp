#include <iostream>
#include <string>
#include <cmath>

int main() {
    int i;
    std::cin >> i;

    char c;
    std::cin >> c;
    
    int j;
    std::cin >> j;

    switch(c) {
        case '+':
            std::cout << i + j;
            break;
        case '-':
            std::cout << i - j;
            break;
        case '*':
            std::cout << i * j;
            break;
        case '/':
            if (j == 0) {
                std::cout << "На ноль делить нельзя!";
                return 0;
            }
            else{
                std::cout << i / j;
                break;
            }
        case '^':
            std::cout << pow(i, j);
            break;
        default:
            std::cout << "Невозможно выполнить это действие!";
            break;
    }

    std::cout << std::endl;
    return 0;
}