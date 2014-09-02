#include <string>
#include "Handle.h"

class HandleStub : Handle {
public:
	HandleStub(std::string data);

	std::string send(std::string data);
	std::string receive();

private:
	std::string data_;
};