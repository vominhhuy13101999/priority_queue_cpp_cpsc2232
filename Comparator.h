/*
 *
 * YOU NEED TO IMPLEMENT THIS!
 *
 */
#ifndef __COOMPARATOR_H__
#define __COOMPARATOR_H__
#include "ConcreteEntry.h"
#include <functional>
#include <string>
class Comparator
{
    public:
        int compare(ConcreteEntry* a, ConcreteEntry* b ,std::less<std::string> cmp= std::less<std::string>{}) const{
            return cmp(a->getKey(),b->getKey());
        };
};

#endif
