#include <iostream>
#include "PriorityQueue.h"
#include "ConcreteEntry.h"
#include "Comparator.h"

#ifndef __PRIORITYQUEUEIMPLE_H__
#define __PRIORITYQUEUEIMPLE_H__ 
class PriorityQueueImpl : public PriorityQueue<ConcreteEntry, Comparator>
{
public:
    int size() const;
    bool isEmpty() const;
    void insert(const ConcreteEntry& e);
	const ConcreteEntry& min() const throw(QueueEmpty);
	ConcreteEntry& removeMin() throw(QueueEmpty);
};

#endif
