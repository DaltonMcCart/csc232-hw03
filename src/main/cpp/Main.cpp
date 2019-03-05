/**
 * CSC232 Data Structures
 * Missouri State University
 * 
 * @file   Main.cpp
 * @author Jim Daehn
 * @brief  Entry point for hw03 target.
 */

#include <cstdlib>
#include <iostream>
#include "BagInterface.h"
#include "ArrayBag.h"
#include "SetArrayBag.h"

int main() {
    std::cout << "Hello, main!" << std::endl;
    BagInterface<int>* bagOfInts = new ArrayBag<int>{};
    bagOfInts->add(1);
    bagOfInts->add(2);
    for (auto item : bagOfInts->toVector()) {
        std::cout << item << std::endl;
    }

    SetArrayBag<int> lhb{};
    SetArrayBag<int> rhb{};
    SetArrayBag<int> result = lhb.unionWith(rhb);

    return EXIT_SUCCESS;
}
