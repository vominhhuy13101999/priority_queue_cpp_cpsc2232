/*
 * 
 * YOU NEED TO IMPLEMENT THIS!
 * 
 */
#include <iostream>
#include "Entry.h"

#ifndef __CONCRETE_ENTRY_H__
#define __CONCRETE_ENTRY_H__

class ConcreteEntry : public Entry<std::string,std::string>
{
public:
	ConcreteEntry(std::string key, std::string value)
	{
		// TODO : Implement
	};

//	virtual ~ConcreteEntry()
//	{
//		// TODO : Implement
//	};

	std::string getValue() const
	{
		return "Not implemented";
	};

	std::string getKey() const
	{
		return "Not implemented";
	};
};
#endif
