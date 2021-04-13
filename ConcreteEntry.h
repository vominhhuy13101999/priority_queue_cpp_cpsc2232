/*
 * 
 * YOU NEED TO IMPLEMENT THIS!
 * 
 */
#include <iostream>
#include "Entry.h"

#ifndef __CONCRETE_ENTRY_H__
#define __CONCRETE_ENTRY_H__

class ConcreteEntry : public Entry<std::string, std::string> {
private:
    std::string key;
    std::string value;
	
public:
    ConcreteEntry(std::string key, std::string value)
    {
        this->key = key;
        this->value = value;
    };

    // virtual ~ConcreteEntry()
    // {
    // 	delete
    // 	// TODO : Implement
    // };

    std::string getValue() const
    {
        return value;
    };

    std::string getKey() const
    {
        return key;
    };
};
#endif
