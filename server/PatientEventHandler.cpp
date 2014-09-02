#include "PatientEventHandler.h"
#include "PatientEvent.h"
#include <iostream>

using namespace std;

void PatientEventHandler::handleEvent(HANDLE handle)
{
	PatientEvent* patientEvent = static_cast<PatientEvent*>(parseEvent(handle));
	std::cout << "Type: " << patientEvent->getType << " Value: " << patientEvent->getValue() << '\n';
}

Event* PatientEventHandler::parseEvent(HANDLE handle)
{
	//TODO: Get some stuff out of the handle and convert it to an AlarmEvent.
	Event *test = new PatientEvent();
	return test;
}