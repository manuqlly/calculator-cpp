#include<iostream>
#include<cmath>

int main ()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***************CALCULATOR***************\n";

    std::cout << "ENTER either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1 ";
    std::cin >> num1;

    std::cout << "Enter #2 ";
    std::cin >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            std::cout << result << " result!" <<'\n'; 
        break;

        case '-':
            result = num1 - num2;
            std::cout << result << " result!" <<'\n';
        break;

        case '*':
            result = num1 * num2;
            std::cout << result << " result!"<<'\n';
        break;

        case '/':
            result = num1 / num2;
            std::cout << result << " result!"<<'\n';
        break;

        default:
            std::cout << "This was not a valid respone";
        break;
        

    }


    std::cout << "****************************************";



return 0;


}