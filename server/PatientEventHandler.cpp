#include "PatientEventHandler.h"
#include "PatientEvent.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstdlib>

std::vector<std::string> x = split("one:two::three", ':');
using namespace std;

void PatientEventHandler::handleEvent(HANDLE handle)
{
	PatientEvent* patientEvent = static_cast<PatientEvent*>(parseEvent(handle));
	std::cout << "Type: " << patientEvent->getType << " Value: " << patientEvent->getValue() << '\n';
}

Event* PatientEventHandler::parseEvent(HANDLE handle)
{
	//Expected protocol "id;type;value"
	string input = handle.receive();

	std::istringstream ss(input);
	std::string token;
	std::vector<string> dataArray;

	while (std::getline(ss, token, ';')) {
		dataArray.push_back(token);
	}

	PatientEvent *event = new PatientEvent();
	event->setValue(dataArray.pop_back);
	//TODO: Set the type.

	return event;
}