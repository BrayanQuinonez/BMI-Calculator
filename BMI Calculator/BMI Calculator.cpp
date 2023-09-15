// BMI Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <conio.h>

void calculateBMI()
{
    system("cls");

    double weight;
    double height;

    std::cout << "---" << std::endl;
    std::cout << "Enter your weight (in kilograms): " << std::endl;
    std::cin >> weight;

    std::cout << "Enter your height (in meters): " << std::endl;
    std::cin >> height;

    double bmi = weight / (height * height);

    std::cout << "---" << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "You body masss index is:" << bmi << std::endl;

    std::cout << "---------------------------" << std::endl;
    if (bmi < 18.5)
        std::cout << "You are underweight" << std::endl;
    else if (bmi >= 18.5 && bmi <= 25)
        std::cout << "You are Perfectly healthy" << std::endl;
    else if (bmi > 25)
        std::cout << "You are overweight" << std::endl;
    std::cout << "---" << std::endl;

    std::cout << "\n\nPress any key to go back to Menu..." << std::endl;
    _getch();

}

void instructions() 
{

    system("cls");
    std::cout << "Instructions" << std::endl;
    std::cout << "\n ----------------" << std::endl;
    std::cout << "\n BMI is less than 18.5 : You are underweight" << std::endl;
    std::cout << "\n BMI is between 18.5 and 25 (inclusive): You are perfectly healtly" << std::endl;
    std::cout << "\n BMI is greater than 25 : You are overweight" << std::endl;
    std::cout << "\n Press any key to go back to menu" << std::endl;
}

int main()
{
    do
    {
        system("cls");
        std::cout << "-------------------------------" << std::endl;
        std::cout << "  |     BMI Calculator       |" << std::endl;
        std::cout << "-------------------------------" << std::endl;
        std::cout << "1. Calculate BMI" << std::endl;
        std::cout << "2. BMI Rules" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cout << "Select option" << std::endl;

        char op = _getche();

        if (op == '1') calculateBMI();
        else if (op == '2') instructions();
        else if (op == '3') exit(0);

    } while (1);

    return 0;
    
}

