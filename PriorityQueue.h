/*
 * DO NOT ALTER THIS FILE
 */
#include "QueueEmpty.h"

#ifndef __PRIORITYQUEUE_H__
#define __PRIORITYQUEUE_H__ 
template <typename E, typename C>				// element and comparator
  class PriorityQueue {							// priority-queue interface
  public:
    int size() const;							// number of elements
    bool isEmpty() const { return false; };						// is the queue empty?
    void insert(const E& e);					// insert element
    const E& min() const throw(QueueEmpty);		// minimum element
    E& removeMin() throw(QueueEmpty);			// remove minimum
  };
#endif
