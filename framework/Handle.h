#pragma once
#include <string>

class Handle {
public:
	virtual std::string send(std::string data) = 0;
	virtual std::string receive() = 0;
};