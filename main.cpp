#include <iostream>
#include <vector>
#include "Node.h"
#include "Table.h"
#include <string>
#include <random>

int main() {

	int seed;
	std::cout << "Please enter a seed: " << std::endl;
	std::cin >> seed;
	std::cin.ignore();
	srand(seed);

	Table t;
	int num = 0;
	for (int i = 0; i < 1000; i++) {

		num = rand()%90 + 10; //number between 10 and 99
		t.add(num);

	}

	bool keepGoing = true;
	int input;
	std::string exit;
	while (keepGoing) {

		std::cout << "Enter a row number (between 1 and 9): ";
		std::cin >> input;
		std::cin.ignore();
		t.printRow(input);

		std::cout << std::endl << "Type \"EXIT\" to exit, or type \"CONTINUE\" to continue: ";
		std::cin >> exit;
		std::cin.ignore();
		if (exit == "EXIT") {
			keepGoing = false;
		} //end if

	} //end while
}
