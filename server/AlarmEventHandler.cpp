#include "AlarmEventHandler.h"
#include "AlarmEvent.h"
#include <iostream>


using namespace std;

void AlarmEventHandler::handleEvent(HANDLE handle)
{
	AlarmEvent* alarmEvent = static_cast<AlarmEvent*>(parseEvent(handle));
	std::cout << "Comment: " << alarmEvent->getComment() << "Priority: " << alarmEvent->getPriority() << '\n';
}

Event* AlarmEventHandler::parseEvent(HANDLE handle)
{
	//TODO: Get some stuff out of the handle and convert it to an AlarmEvent.
	Event *test = new AlarmEvent();
	return test;
}