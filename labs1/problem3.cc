#include <iostream>
#include "problem3.h"


void swap1(int* p, int* q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void swap2(int& p, int& q){
    int X;
    X = q;
    p = q;
    q = X;
}


/*==================================================================
                    REFERNCE SWAPPING
===================================================================*/
void swapversion1()
{
    std::cout << "<<<<  PROBLEM 3  >>>>" << "\nSWAP VERSION 1" << std::endl;
    int var1, var2;
    std::cout << "Input your integer 1: "; std::cin >> var1;
    std::cout << "Input your integer 2: "; std::cin >> var2;

    swap2(var1, var2);

    std::cout << "Your swapped integer 1: " << var1 << std::endl;
    std::cout << "Your swapped integer 2: " << var2 << std::endl;

}

/*=====================================================================
                     POINTER SWAPPING
=======================================================================*/

void swapversion2()
{
    std::cout << "\nSWAP VERSION 2" << std::endl;
    int var1, var2;
    std::cout << "Input your integer 1: "; std::cin >> var1;
    std::cout << "Input your integer 2: "; std::cin >> var2;

    swap1(&var1, &var2);

    std::cout << "Your swapped integer 1: " << var1 << std::endl;
    std::cout << "Your swapped integer 2: " << var2 << std::endl;

}
