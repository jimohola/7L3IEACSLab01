#include <iostream>
#include "problem2.h"


void problem2() {
    std::cout << "<<<<  PROBLEM 2  >>>>" << std::endl;
    int p[] = {1,2,3,4,5,6,7,8,9,10};
    int q = sizeof(p)/sizeof(p[0]);

    for(int i=0; i<q; i++) {
        std::cout <<"f(" << p[i] << ") = sin(" << p[i] << ") + ln(" << p[i] << ")" << std::endl;
    }
}
