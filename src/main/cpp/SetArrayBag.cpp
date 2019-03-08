/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    SetArrayBag.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Dalton McCart <mccart42@live.missouristate.edu>
 * @coauthor Longhi Vo <nvo97@live.missouristate.edu>
 *
 * @brief   Implementation file for an set supporting, array-based implementation of the ADT bag.
 */

#include "SetArrayBag.h"
#include <iostream>

template<typename ItemType>
BagInterface<ItemType> &SetArrayBag<ItemType>::unionWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType> *unionBag = new SetArrayBag{};

    for (auto item : ArrayBag<ItemType>::toVector()){
            unionBag->add(item);
    }


    for (auto item : bag.toVector()){
           unionBag->add(item);
    }
    return *unionBag;
}

template<typename ItemType>
BagInterface<ItemType>& SetArrayBag<ItemType>::intersectionWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType> *intersectionBag = new SetArrayBag{};

    for (auto item : ArrayBag<ItemType>::toVector()){
        if (bag.contains(item) && intersectionBag->getFrequencyOf (item) < ArrayBag<ItemType>::getFrequencyOf (item) &&
            intersectionBag->getFrequencyOf(item) < bag.getFrequencyOf (item) ){
            intersectionBag->add(item);
        }
    }
    return *intersectionBag;
}

template<typename ItemType>
BagInterface<ItemType>& SetArrayBag<ItemType>::differenceWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType> *differenceBag = new SetArrayBag{};

    for(auto item : this->toVector ()) {
        if (!bag.contains(item))
            differenceBag->add(item);
    }
    return *differenceBag;
}
