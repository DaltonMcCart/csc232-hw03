/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    SetArrayBag.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *
 * @brief   Header file for an set supporting, array-based implementation of the ADT bag.
 */

#ifndef HW03_SETARRAYBAG_H
#define HW03_SETARRAYBAG_H

#include "BagInterface.h"
#include "ArrayBag.h"

template <typename ItemType>
class SetArrayBag : public ArrayBag<ItemType> {
public:
    SetArrayBag<ItemType> unionWith(const BagInterface<ItemType>& bag);
    SetArrayBag<ItemType> intersectionWith(const BagInterface<ItemType>& bag);
    SetArrayBag<ItemType> differenceWith(const BagInterface<ItemType>& bag);
};

#include "SetArrayBag.cpp"

#endif //HW03_SETARRAYBAG_H
