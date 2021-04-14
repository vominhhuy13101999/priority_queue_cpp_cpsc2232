/*
 * DO NOT ALTER THIS FILE!
 */
#include <iostream>
#include <string>
using namespace std;

#include "MethodMustBeImplemented.h"
#include "PriorityQueue.h"
#include "ConcreteEntry.h"
#include "Comparator.h"
#include "PriorityQueueImpl.h"
#include "Node.h"
void getAndPrintMinimum(PriorityQueueImpl queue)
{
	ConcreteEntry minimum = queue.removeMin();
	string minimumKey = minimum.getKey();
	string minimumValue = minimum.getValue();

	cout << "K:" + minimumKey + " V:" + minimumValue << endl;
}

ConcreteEntry makeEntry(string key, string value)
{
	return ConcreteEntry(key, value);
}

void testAllFunctions(PriorityQueueImpl queue)
{
	cout << queue.size() << endl;
	cout << queue.isEmpty() << endl;

	queue.insert(makeEntry("A", "Some string 7"));
	queue.insert(makeEntry("B", "Some string 2"));
	queue.insert(makeEntry("C", "Some string 3"));
	queue.insert(makeEntry("D", "Some string 4"));
	queue.insert(makeEntry("AA", "Some string 5"));
	queue.insert(makeEntry("AAA", "Some string 6"));
	queue.insert(makeEntry("aAA", "Some string 7"));

	cout << queue.size() << endl;
	cout << queue.isEmpty() << endl;

	cout << queue.min().getValue() << endl;

	getAndPrintMinimum(queue);
	getAndPrintMinimum(queue);
	getAndPrintMinimum(queue);
	getAndPrintMinimum(queue);
	getAndPrintMinimum(queue);
	getAndPrintMinimum(queue);
	getAndPrintMinimum(queue);
	getAndPrintMinimum(queue);
	getAndPrintMinimum(queue);
}

void testSize(PriorityQueueImpl queue)
{
	cout << queue.size() << endl;
	// cout << "---------------------" << endl;
	queue.insert(makeEntry("a", "a"));
	// cout << "---------------------" << endl;
	cout << queue.size() << endl;
}

void testIsEmpty(PriorityQueueImpl queue)
{
	cout << queue.isEmpty() << endl;
	queue.insert(makeEntry("a", "a"));
	cout << queue.isEmpty() << endl;
}

void testMin(PriorityQueueImpl queue)
{
	// cout << "---------------------" << endl;

	queue.insert(makeEntry("a", "a"));
	// cout << "---------------------" << endl;

	queue.insert(makeEntry("b", "b"));
	// cout << "---------------------" << endl;

	cout << queue.size() << endl;
	cout << queue.min().getKey() << endl;
	cout << queue.size() << endl;
}

void testRemoveMin(PriorityQueueImpl queue)
{
	queue.insert(makeEntry("a", "a"));
	queue.insert(makeEntry("b", "b"));
	cout << queue.removeMin().getKey() << endl;
	cout << queue.size() << endl;
}

void testInvalidKey(PriorityQueueImpl queue)
{
	try
	{
		queue.insert(makeEntry(NULL, NULL));
	}
	catch (exception &exception)
	{
		cout << "Caught the right exception!" << endl;
	}
}

int main(int argc, char *args[])
{
	PriorityQueueImpl queue;
	// cout<< argc<<endl;
	// string argument(args[0]);
	// cout<<"argument:"<<argument.compare("all") <<endl;
	try
	{
		for (int i = 1; i < argc; ++i)
		{
			string argument(args[i]);

			if (argument.compare("all") ==0)
			{
				// cout<<"test all"<<endl;

				testAllFunctions(queue);
			}
			else if (argument.compare("size")==0)
			{
				// cout<<"test size"<<endl;
				testSize(queue);
			}
			else if (argument.compare("isempty")==0)
			{
				// cout<<"test isempty"<<endl;

				testIsEmpty(queue);
			}
			else if (argument.compare("min")==0)
			{
				// cout<<"test min"<<endl;

				testMin(queue);
			}
			else if (argument.compare("removemin")==0)
			{
				// cout<<"test removemin"<<endl;

				testRemoveMin(queue);
			}
			else
			{
				// cout<<"test invalidkey"<<endl;

				testInvalidKey(queue);
			}
		}
	}
	catch (MethodMustBeImplemented& exception)
	{
		cerr << "ERROR:" << exception.what() << endl;
	}
	// catch (const std::exception &exc)
	// {
	// 	// catch anything thrown within try block that derives from std::exception
	// 	std::cerr << exc.what();
	// }
}
