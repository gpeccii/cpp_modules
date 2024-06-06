#include "Fixed.hpp"

const int Fixed::_fract = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
}

Fixed::Fixed(const Fixed &toCopy) {
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(toCopy.getRawBits());
	return;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = num << this->_fract;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(num * (1 << this->_fract));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &toCopy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &toCopy)
		this->setRawBits(toCopy.getRawBits());
	return *this;
}

std::ostream&	operator<<(std::ostream& outStream, const Fixed& obj) {
	outStream << obj.toFloat();
	return outStream;
}

int	Fixed::getRawBits( void ) const {
	return (this->_fixed);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixed = raw;
}

float	Fixed::toFloat( void ) const {
	return float(this->_fixed) / (1 << this->_fract);
}

int	Fixed::toInt( void ) const {
	return this->_fixed / (1 << this->_fract);
}
