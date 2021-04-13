/*
 *
 * YOU NEED TO IMPLEMENT THIS!
 *
 */
#ifndef __COOMPARATOR_H__
#define __COOMPARATOR_H__
#include "ConcreteEntry.h"
#include <functional>

class Comparator
{
    public:
        int compare(ConcreteEntry* a, ConcreteEntry* b ,std::less<> cmp= std::less<>{}) const{
            return cmp(a->getKey(),b->getKey());
        };
};

#endif
