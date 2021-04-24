#include "Pony.hpp"
#include <iostream>

Pony::Pony()
{
	Pony::_nbCreated += 1;
	this->_index = Pony::_nbCreated;
	this->_name = Pony::_randomName[std::rand() % 5];
	this->_color = Pony::_randomColor[std::rand() % 4];
	this->_age = std::rand() % 20 + 1;
	std::cout << "Pony "<< this->_name << "[" << this->_index << "] is created. Its color is ";
	std::cout << this->_color << " and age is " << this->_age << std::endl;
};

Pony::~Pony()
{
	std::cout << "Pony " << this->_name << "[" << this->_index << "] died =("<< std::endl;
};

const std::string Pony::_randomName[5] = {"Peanut", "Daisy", "Cinnamon", "Scooter", "Bella"};
const std::string Pony::_randomColor[4] = {"BLACK", "WHITE", "GREY", "BROWN"};

int Pony::_nbCreated = 0;