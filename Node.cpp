#include <iostream>
#include "Node.h"

Node::Node() {

	this->data = 0;
	this->next = NULL;

} //end null parameter constructor


Node::Node(int num) {

	this->data = num;
	this->next = NULL;

} //end constructor


void Node::removeNext() {
	//recursively delete all nodes in list
	if (this->next != NULL) {
		this->next->removeNext();
	}
	delete this->next;
}