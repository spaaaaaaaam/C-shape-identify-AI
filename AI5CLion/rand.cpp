//
// Created by sr0005 on 3/11/2026.
//

#include <iostream>
#include "rand.h"

Rand::Rand() {
    std::cout << "seed for rand num gen";
    std::cin >> prevNum;
}

int Rand::genNum(int ceiling){
    prevNum = (1234567 * (prevNum + 1)) ;
    return(std::abs(prevNum % (ceiling)));
}