#include "Event.h"
#include <string>

using namespace std;

class PatientEvent : public Event
{
public:
	PatientEvent();
	~PatientEvent();
private:
	int value_;
	string type_;
};

