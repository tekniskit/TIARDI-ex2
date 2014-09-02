#include "EventHandler.h"

class AlarmEventHandler : EventHandler
{
public:
	void handleEvent(HANDLE handle);
private:
	Event* parseEvent(HANDLE handle);
};