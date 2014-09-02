#include "EventHandler.h"

class LogEventHandler : EventHandler
{
public:
	void handle_event(HANDLE handle);
private:
	Event map_parse_event(HANDLE handle);
};