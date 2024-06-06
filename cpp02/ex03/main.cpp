#include "Point.hpp"
#include <iostream>

int main( void )
{
	const Point	a(1.0f, 1.0f);
	const Point	b(5.0f, 1.0f);
	const Point	c(3.0f, 5.0f);
	const Point	p1(3.0f, 2.0f);
	const Point	p2(1.0f, 4.0f);

	std::cout << "point a: " << a.getX() << ", " << a.getY() << std::endl;
	std::cout << "point b: " << b.getX() << ", " << b.getY() << std::endl;
	std::cout << "point c: " << c.getX() << ", " << c.getY() << std::endl;
	std::cout << "point p1: " << p1.getX() << ", " << p1.getY() << std::endl;
	std::cout << "point p2: " << p2.getX() << ", " << p2.getY() << std::endl;


	if (bsp(a, b, c, p1))
		std::cout << "p1 is in triangle ABC" << std::endl;
	else
		std::cout << "p1 isn't in triangle ABC" << std::endl;
	if (bsp(a, b, c, p2))
		std::cout << "p2 is in triangle ABC" << std::endl;
	else
		std::cout << "p2 isn't in triangle ABC" << std::endl;
	return (0);
}
