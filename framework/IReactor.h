#pragma once
#include "EventHandler.h"


typedef unsigned int Time_Value;
typedef unsigned int Event_Type;

class IReactor
{
	public:
		virtual void register_handler(EventHandler* handler, Event_Type type) = 0;
		virtual void remove_handler(EventHandler* handler, Event_Type type) = 0;
		virtual void handle_events(Time_Value* = 0) = 0; 

	private:



};