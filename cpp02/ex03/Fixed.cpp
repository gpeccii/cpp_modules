#include "Fixed.hpp"

const int Fixed::_fract = 8;

Fixed::Fixed() {
	_fixed = 0;
}

Fixed::Fixed(const Fixed &toCopy) {
	this->setRawBits(toCopy.getRawBits());
	return;
}

Fixed::Fixed(const int num) {
	this->_fixed = num << this->_fract;
}

Fixed::Fixed(const float num) {
	this->_fixed = roundf(num * (1 << this->_fract));
}

Fixed::~Fixed() {
}

Fixed&	Fixed::operator=(const Fixed &toCopy) {
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

bool Fixed::operator>(const Fixed &other) const {
	return this->_fixed > other._fixed;
}

bool Fixed::operator<(const Fixed &other) const {
	return this->_fixed < other._fixed;
}

bool Fixed::operator>=(const Fixed &other) const {
	return this->_fixed >= other._fixed;
}

bool Fixed::operator<=(const Fixed &other) const {
	return this->_fixed <= other._fixed;
}

bool Fixed::operator==(const Fixed &other) const {
	return this->_fixed == other._fixed;
}

bool Fixed::operator!=(const Fixed &other) const {
	return this->_fixed != other._fixed;
}

Fixed Fixed::operator+(const Fixed &other) {
	Fixed result;
	result.setRawBits(this->_fixed + other._fixed);
	return result;
}

Fixed Fixed::operator-(const Fixed &other) {
	Fixed result;
	result.setRawBits(this->_fixed - other._fixed);
	return result;
}

Fixed Fixed::operator*(const Fixed &other) {
	Fixed result;
	result.setRawBits((this->_fixed * other._fixed) >> this->_fract);
	return result;
}

Fixed Fixed::operator/(const Fixed &other) {
	Fixed result;
	result.setRawBits((this->_fixed << this->_fract) / other._fixed);
	return result;
}

// Prefisso incremento
Fixed &Fixed::operator++() {
	++this->_fixed;
	return *this;
}

// Postfisso incremento
Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	++this->_fixed;
	return temp;
}

// Prefisso decremento
Fixed &Fixed::operator--() {
	--this->_fixed;
	return *this;
}

// Postfisso decremento
Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	--this->_fixed;
	return temp;
}

// Funzioni statiche per trovare il minimo e il massimo
const Fixed &Fixed::min(const Fixed &fixedOne, const Fixed &fixedTwo) {
	return (fixedOne < fixedTwo) ? fixedOne : fixedTwo;
}

Fixed &Fixed::min(Fixed &fixedOne, Fixed &fixedTwo) {
	return (fixedOne < fixedTwo) ? fixedOne : fixedTwo;
}

const Fixed &Fixed::max(const Fixed &fixedOne, const Fixed &fixedTwo) {
	return (fixedOne > fixedTwo) ? fixedOne : fixedTwo;
}

Fixed &Fixed::max(Fixed &fixedOne, Fixed &fixedTwo) {
	return (fixedOne > fixedTwo) ? fixedOne : fixedTwo;
}

