#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>

class Fixed
{
private:
	int					_fixed;
	static const int	_fract;

public:
	Fixed();
	Fixed(const Fixed &toCopy);
	Fixed& operator=(const Fixed &toCopy);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
