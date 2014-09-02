#include "Event.h"
#include <string>

using namespace std;

class PatientEvent : public Event{
public:
	PatientEvent();
	~PatientEvent();

	int getValue();
	void setValue(int v);

	string getType();
	void setType(string t);

private:
	int value_;
	string type_;
};

