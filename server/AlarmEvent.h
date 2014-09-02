#include "Event.h"
#include <string>

using namespace std;


class AlarmEvent : public Event{
public:
	AlarmEvent();
	~AlarmEvent();

	int getPriority();
	void setPriority(int i);

	string getComment();
	void setComment(string c);

private:
	int priority_;
	string comment_;

};
