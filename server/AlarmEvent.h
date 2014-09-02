#include "Event.h"
#include <string>

using namespace std;


class AlarmEvent : public Event{
public:
	AlarmEvent();
	~AlarmEvent();
private:
	int priority_;
	string comment_;

};
