#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
private:
	int					_fixed;
	static const int	_fract;
public:
	Fixed();
	Fixed(const Fixed &toCopy);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();

	Fixed& operator=(const Fixed &toCopy);

	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	Fixed	operator+(const Fixed &other);
	Fixed	operator-(const Fixed &other);
	Fixed	operator*(const Fixed &other);
	Fixed	operator/(const Fixed &other);

	Fixed&	operator++(); //++x
	Fixed	operator++(int); //x++
	Fixed&	operator--(); //--x
	Fixed	operator--(int); //x--

	static const Fixed &min(const Fixed &fixedOne,const Fixed &fixedTwo);
	static Fixed &min(Fixed &fixedOne, Fixed &fixedTwo);
	static const Fixed &max(const Fixed &fixedOne,const Fixed &fixedTwo);
	static Fixed &max(Fixed &fixedOne, Fixed &fixedTwo);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);

#endif
