#pragma once

typedef unsigned int Event_Handler;

typedef unsigned int Time_Value;
typedef unsigned int Event_Type;

class IReactor
{
	public:
		virtual void register_handler(Event_Handler* handler, Event_Type type) = 0;
		virtual void remove_handler(Event_Handler* handler, Event_Type type) = 0;
		virtual void handle_events(Time_Value* = 0) = 0; 

	private:



};