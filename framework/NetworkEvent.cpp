#include "NetworkEvent.h"

HANDLE NetworkEvent::getHandle() {
	return handle_;
};

void NetworkEvent::setHandle(HANDLE handle) {
	handle_ = handle;
};

unsigned int NetworkEvent::getEventType() {
	return eventType_;
};

void NetworkEvent::setEventType(unsigned int eventType) {
	eventType_ = eventType;
};