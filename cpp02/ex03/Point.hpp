#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class Point {
private:
	const Fixed	x;
	const Fixed y;
public:
	Point();
	Point(const float numOne, const float numTwo);
	Point(const Point &other);
	Point& operator=(const Point &other);
	~Point();
	bool operator==(const Point &other) const;	const Fixed getX() const;
	const Fixed getY() const;
};

float myFabs(float num);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
