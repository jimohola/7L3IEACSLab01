#include <iostream>
#include "problem4.h"


void bubblesort(){
    int X, pass=0;
    int a[10] = {234,56,876,4,7,4,98,34,6,5};
    std::cout << "Input array: " << std::endl;
    for(int i=0; i<10; i++) {
        std::cout << a[i] << "\t";
    }
    std::cout << std::endl;

    for(int i=0; i<10; i++) {
        for(int j=i+1; j<10; j++){
            if(a[j] < a[i]) {

                //swapping
                X = a[i];
                a[i] = a[j];
                a[j] = X;
            }
        }
        pass++;
    }
    std::cout << "Sorted elements: " << std::endl;
    for(int i=0; i<10; i++) {
        std::cout << a[i] << "\t";
    }
    std::cout << "\nNumber of passes taken to sort the list: " << pass << std::endl;
}

