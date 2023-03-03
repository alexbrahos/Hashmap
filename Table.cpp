#include <iostream>
#include <vector>
#include "Node.h"
#include "Table.h"

Table::Table() {
	for (int i = 0; i < 10; i++) {
		categories.push_back(NULL);
	} //end for
} //end constructor


Table::~Table() {

	//create the table with enough rows
	for (int i = 0; i < 10; i++) {

		if (categories[i] != NULL) {
			categories[i]->removeNext();
		}
		delete categories[i];

	} //end for

} //end destructor


void Table::add(int num) {

	//if the element already exists, do nothing, otherwise put it in the row with the same number as its first digit
	if (!foundElement(num)) {
		int category = num / 10;
		if (categories[category] == NULL) {

			categories[category] = new Node(num);

		} //end if null, start else
		else {

			Node* temp = categories[category];
			while (temp->next != NULL) {

				temp = temp->next;

			}

			temp->next = new Node(num);

		}
	} //end if not found element

} //end add


bool Table::foundElement(int num) {

	//check all the values in the correct row to see if the value already exists
	int category = num / 10;
	if (categories[category] != NULL) {

		Node* temp = categories[category];
		while (temp != NULL) {
			if (temp->data == num) {
				return true;
			}
			temp = temp->next;
		} //end while

	} //end if

	return false;

} //end foundElement


void Table::print() {

	Node* temp = NULL;
	for (int i = 1; i < 10; i++) {

		std::cout << i << ": ";
		temp = categories[i];
		while (temp != NULL) {

			std::cout << temp->data << " ";
			temp = temp->next;

		} //end while

		std::cout << std::endl;

	} //end for

} //end print


void Table::printRow(int num) {

	Node* temp = categories[num];
	std::cout << "Row " << num << ": ";

	while (temp != NULL) {

		std::cout << temp->data << " ";
		temp = temp->next;

	} //end while

	std::cout << std::endl;

} //end printRow