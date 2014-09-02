#include "Event.h"

class EventHandler{
public:
	virtual void handleEvent(HANDLE handle) = 0;
private:
	virtual Event* parseEvent(HANDLE handle) = 0;
};