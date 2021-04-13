all: PriorityQueueTest.exe

PriorityQueueTest.exe: PriorityQueueImpl.o PriorityQueueTest.o
	g++ -std=c++11 PriorityQueueImpl.o PriorityQueueTest.o -o PriorityQueueTest.exe


	
