#include "Event.h"
#include <string>

using namespace std;

class LogEvent : public Event
{
public:
	LogEvent();
	~LogEvent();
private:
	string text_;
};

