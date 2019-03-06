/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    SetArrayBag.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          TODO: Put your name here
 *
 * @brief   Implementation file for an set supporting, array-based implementation of the ADT bag.
 */

#include "SetArrayBag.h"

template<typename ItemType>
BagInterface<ItemType> &SetArrayBag<ItemType>::unionWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType> *unionBag = new SetArrayBag{};

    // TODO: Implement me; commit when done

    return *unionBag;
}

template<typename ItemType>
BagInterface<ItemType>& SetArrayBag<ItemType>::intersectionWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType> *intersectionBag = new SetArrayBag{};

    // TODO: Implement me; commit when done

    return *intersectionBag;
}

template<typename ItemType>
BagInterface<ItemType>& SetArrayBag<ItemType>::differenceWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType> *differenceBag = new SetArrayBag{};

    // TODO: Implement me; commit when done

    return *differenceBag;
}
