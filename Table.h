#ifndef TABLE_H_EXISTS
#define TABLE_H_EXISTS

#include <vector>
#include <iostream>
#include "Node.h"

class Table {

	public:
		std::vector<Node*> categories;
		Table();
		~Table();
		void add(int num);
		bool foundElement(int num);
		void print();
		void printRow(int num);

};

#endif
