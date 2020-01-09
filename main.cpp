#include <iostream>
#include "templates.h"
#include "point.h"
#include "figures.h"
#include <vector>

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
				<< "4) tuple" << '\n'
				<< "5) dop" << std::endl;
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
		case '5': {
			std::cout << is_ok<std::string, char*>::value << std::endl;
			std::cout << is_ok<float, int>::value << std::endl;
			std::cout << is_ok<char, std::vector < double>>::value << std::endl;
		}
		}
	}
	return 0;
}
