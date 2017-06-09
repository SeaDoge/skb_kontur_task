#include "ZeroChildrenGiven.h"



ZeroChildrenGiven::ZeroChildrenGiven(std::string message) {
	_message = message;
}


const char* ZeroChildrenGiven::what() const noexcept {
	return ("Zero children was given: " + _message).c_str();
}