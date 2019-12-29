#ifndef OOP_EXERCISE_04_CLASSES_H
#define OOP_EXERCISE_04_CLASSES_H

#include "point.h"
#include <type_traits>
#include <iostream>

template <class T>
class Triangle {
public:
	point<T> dots[3];
	int size = 3;
	explicit Triangle<T>(std::istream& is) {
		for (auto& dot : dots) {
			is >> dot;
		}
	}
};

template <class T>
class Hexagon {
public:
	point<T> dots[6];
	int size = 6;
	explicit Hexagon<T>(std::istream& is) {
		for (auto& dot : dots) {
			is >> dot;
		}
	}
};

template <class T>
class Octagon {
public:
	point<T> dots[8];
	int size = 8;
	explicit Octagon<T>(std::istream& is) {
		for (auto& dot : dots) {
			is >> dot;
		}
	}
};

#endif 
