#import "EventHandler.h"

class LogEventHandler : EventHandler
{
public:
	void handle_run(HANDLE handle);
private:
	Event map_parse_event(HANDLE handle);
};