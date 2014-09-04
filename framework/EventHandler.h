#pragma once
#include "../server/Event.h"

class EventHandler{
public:
	virtual void handleEvent(Handle* handle) = 0;
private:
	virtual Event* parseEvent(Handle* handle) = 0;
};