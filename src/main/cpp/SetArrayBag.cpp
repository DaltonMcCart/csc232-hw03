/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    SetArrayBag.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *
 * @brief   Implementation file for an set supporting, array-based implementation of the ADT bag.
 */

#include "SetArrayBag.h"

template<typename ItemType>
SetArrayBag<ItemType> SetArrayBag<ItemType>::unionWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType>* unionBag = new SetArrayBag{};

    return *unionBag;
}

template<typename ItemType>
SetArrayBag<ItemType> SetArrayBag<ItemType>::intersectionWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType>* intersectionBag = new SetArrayBag{};

    return *intersectionBag;
}

template<typename ItemType>
SetArrayBag<ItemType> SetArrayBag<ItemType>::differenceWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType>* differenceBag = new SetArrayBag{};

    return *differenceBag;
}
