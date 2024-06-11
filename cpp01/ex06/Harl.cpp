#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info(void) {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void) {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
	void (Harl::*funcs[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	int index = -1;
	if (level == "DEBUG") index = 0;
	else if (level == "INFO") index = 1;
	else if (level == "WARNING") index = 2;
	else if (level == "ERROR") index = 3;

	switch (index) {
		case 0:
			(this->*funcs[0])();
		case 1:
			(this->*funcs[1])();
		case 2:
			(this->*funcs[2])();
		case 3:
			(this->*funcs[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
