#include "EventHandler.h"

class LogEventHandler : EventHandler
{
public:
	void handleEvent(HANDLE handle);
private:
	Event* parseEvent(HANDLE handle);
};