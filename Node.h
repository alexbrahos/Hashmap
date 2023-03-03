#ifndef NODE_H_EXISTS
#define NODE_H_EXISTS

#include <iostream>

class Node {

	public:
		Node* next;
		int data;
		Node();
		Node(int num);
		void removeNext();

 };

#endif
