#include <iostream>
#include "templates.h"
#include "point.h"
#include "figures.h"


int main() {
	char option = '0';
	while (option != 'q') {
		std::cout << "choose option (m for menu, q to quit): ";
		std::cin >> option;
		switch (option) {
		default:
			std::cout << "no such option, try m for menu" << std::endl;
			break;
		case 'q':
			break;
		case 'm': {
			std::cout << "1) triangle" << '\n'
				<< "2) hexagon" << '\n'
				<< "3) octagon" << '\n'
				<< "4) tuple" << std::endl;
			break;
		}
		case '1': {
			figures<Triangle<double>>(std::cin, std::cout);
			break;
		}
		case '2': {
			figures<Hexagon<double>>(std::cin, std::cout);
			break;
		}
		case '3': {
			figures<Octagon<double>>(std::cin, std::cout);
			break;
		}
		case '4': {
			figures<std::tuple<point<double>>>(std::cin, std::cout);
			break;
		}

		}
	}
	return 0;
}