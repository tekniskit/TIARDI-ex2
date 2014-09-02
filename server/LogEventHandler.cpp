#include "LogEventHandler.h"
#include "LogEvent.h"
#include <iostream>

using namespace std;

void LogEventHandler::handleEvent(HANDLE handle)
{
	LogEvent* logEvent = static_cast<LogEvent*>(parseEvent(handle));
	std::cout << "Text: " << logEvent->getText() << '\n';
}

Event* LogEventHandler::parseEvent(HANDLE handle)
{
	//TODO: Get some stuff out of the handle and convert it to an AlarmEvent.
	Event *test = new LogEvent();
	return test;
}
