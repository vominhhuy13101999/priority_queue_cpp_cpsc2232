#include <iostream>
#include "PriorityQueue.h"
#include "ConcreteEntry.h"
#include "Comparator.h"
#include "Node.h"
#include <vector>

#ifndef __PRIORITYQUEUEIMPLE_H__
#define __PRIORITYQUEUEIMPLE_H__ 
class PriorityQueueImpl : public PriorityQueue<ConcreteEntry, Comparator>
{
private:
    // linked list of ConcreteEntry
    int len = 0;
    Node* head;
    Comparator* C;
    Node* tail;
    // std::vector<ConcreteEntry> v;
public:
    int size() const;
    bool isEmpty() const;
    void insert(const ConcreteEntry& e);
	const ConcreteEntry& min() const throw(QueueEmpty);
	ConcreteEntry& removeMin() throw(QueueEmpty);
    // void print() const;
};

#endif
