#include <iostream>
#include "problem1.h"



void example_function() {
    std::cout << "Call functiopn example_function()" << std::endl;

}


void problem1() {
    std::cout << "<<<<  PROBLEM 1  >>>>" << std::endl;

    /*===============================================================================
                        PROBLEM 1 -- QUESTION 1
    ================================================================================*/

    std::cout << "QUESTION 1" << std::endl;

    char var1, var2;
    std::cout << "Imput your first variable (char): ";
    std::cin >> var1;
    std::cout << "Imput your second variable (char): ";
    std::cin >> var2;

    /* swapping */
    int X = var1;
    var1 = var2;
    var2 = X;

    std::cout << "Swapped first variable:" << var1 << std::endl << "Swapped second variable:" << var2 << std::endl;


    /*===============================================================================
                       PROBLEM 1 -- QUESTION 2
    ================================================================================*/

    std::cout << "\n\nQUESTION 2" << std::endl;
        int number1, number2;
        bool sign1, sign2;
        std::cout << "Imput your first number: "; std::cin >> number1;
        std::cout << "Imput your second number: "; std::cin >> number2;

        if (number1 < 0) {
            sign1 = false;
        } else {
            sign1 = true;
        }

        if (number2 < 0) {
            sign2 = false;
        } else {
            sign2 = true;
        }

        if (sign1 == sign2) {
            std::cout << "Both number have same sign" << std::endl;
        } else {
            std::cout << "Both number have different sign" << std::endl;
        }

     /*===============================================================================
                        PROBLEM 1 -- QUESTION 3
      ================================================================================*/

        std::cout << "\n\nQUESTION 3" << std::endl;
            //int number1, number2;
            bool evensign1, evensign2;
            std::cout << "Imput your first number: "; std::cin >> number1;
            std::cout << "Imput your second number: "; std::cin >> number2;

            if (number1 % 2 == 0) {
                evensign1 = true;
            } else {
                evensign1 = false;
            }

            if (number2 % 2 == 0) {
                evensign2 = true;
            } else {
                evensign2 = false;
            }

            if (evensign1 == true) {
                std::cout << number1 << " is even number" << std::endl;
            } else { std::cout << number1 << " is odd number" << std::endl; }

            if (evensign2 == true) {
                std::cout << number2 << " is even number" << std::endl;
            } else { std::cout << number2 << " is odd number" << std::endl; }


      /*===============================================================================
                               PROBLEM 1 -- QUESTION 4
       ================================================================================*/

            std::cout << "\n\nQUESTION 4" << std::endl;
               std::cout << "First" << std::endl;


        /*===============================================================================
                               PROBLEM 1 -- QUESTION 5
        ================================================================================*/

               std::cout << "\n\nQUESTION 5" << std::endl;
                   char x;
                   std::cout << "===Choose your menu below===" << std::endl;
                   std::cout << "Menu 1: Displaying 3 words of -First-" << std::endl;
                   std::cout << "Menu 2: Displaying 2 words of -Second-" << std::endl;
                   std::cout << "Your answer (a = Menu 1 / b = Menu 2): "; std::cin >> x;

                   if (x == 'a') {
                       for(int i=0; i<3; i++)
                       {
                           std::cout << "First" << std::endl;
                       }
                   }
                   if (x == 'b') {
                       for (int i=0; i<2; i++)
                       {
                           std::cout << "Second" << std::endl;
                       }
                   }
                   if (x != 'a' && x != 'b') {
                       std::cout << "Wrong answer!" << std::endl;
                   }

}
