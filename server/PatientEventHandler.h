#include "EventHandler.h"

class PatientEventHandler : EventHandler
{
public:
	void handleEvent(HANDLE handle);
private:
	Event* parseEvent(HANDLE handle);
};