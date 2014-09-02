#include "EventHandler.h"

class PatientEventHandler : EventHandler
{
public:
	void handle_event(HANDLE handle);
private:
	Event map_parse_event(HANDLE handle);
};