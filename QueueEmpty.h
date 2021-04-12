/*
 * DO NOT ALTER THIS FILE
 */
#include <exception>

#ifndef __QUEUEEMPTY_H__
#define __QUEUEEMPTY_H__

class QueueEmpty: public std::exception
{
  virtual const char* what() const throw()
  {
    return "The queue is empty.";
  }
};
#endif
