#include "PriorityQueue.h"
#include "PriorityQueueImpl.h"
#include "MethodMustBeImplemented.h"
#include "Node.h"
#include <iostream>
#include "Comparator.h"
using namespace std;

int PriorityQueueImpl::size() const
{
	return len;
}

bool PriorityQueueImpl::isEmpty() const
{
	
	return len==0;
}

void PriorityQueueImpl::insert(const ConcreteEntry& e)
{
	ConcreteEntry* e1=new ConcreteEntry(e.getKey(), e.getValue()); 
	if (len == 0) {
		head= new Node();
		C=new Comparator();
		//cout<<"----------------"<<endl;
		head->entry = e1;
		//cout<<"----------------"<<endl;

		tail=head;
	}
	else if(C->compare(e1,head->entry)){
		Node* n= new Node();
		n->entry= e1;
		n->next=head;
		head=n;
		

		

	}
	else if(len==1){
		Node* n= new Node();
		n->entry= e1;
		head->next=n;
		tail=n;

		

	}
	else if (C->compare(tail->entry,e1)){
		Node* n= new Node();
		n->entry= e1;
		tail->next=n;
		tail=n;

	}

	else{




		Node* n=head;
		for (int i=0;i<len-1; i++){

			if (C->compare(e1,n->next->entry)){
				Node* n1= new Node();
				n1->entry= e1;
				n1->next=n->next;
				n->next=n1;
				break;
	}
		n=n->next;
		}
	}
	len++;
}

const ConcreteEntry& PriorityQueueImpl::min() const throw(QueueEmpty)
{
	if (len==0){
		QueueEmpty QE;
		throw QE ;
	}
	else{
		return (*head->entry);
	}

}

ConcreteEntry& PriorityQueueImpl::removeMin() throw(QueueEmpty)
{
	if (len<1){
		QueueEmpty QE;
		throw QE ;
	}
	else{
		ConcreteEntry& a = (*head->entry);
		head=head->next;
		len--;
		return  a;
	}
}

// void PriorityQueueImpl::print(){
// 	if (len<1){
// 		cout<<"nothing in the list"<<endl;
// 	}
// 	else{
// 		Node* n=head;

// 		for (int i=0; i< len)
// 	}
// }
