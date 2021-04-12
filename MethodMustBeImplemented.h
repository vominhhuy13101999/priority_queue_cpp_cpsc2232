/*
 * DO NOT ALTER THIS FILE
 */
#include <exception>

#ifndef __METHODMUSTBEIMPLEMENTED_H__
#define __METHODMUSTBEIMPLEMENTED_H__

class MethodMustBeImplemented: public std::exception
{
public:
  virtual const char* what() const throw()
  {
    return "Implement this!";
  }
};
#endif
