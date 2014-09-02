#pragma once

class IReactor
{

	public:
		virtual void register_handler(Event_Handler* handler, Event_Type type) = 0;
		virtual void remove_handler(Event_Handler* handler, Event_Type type) = 0;
		virtual void handle_events(Time_Value* = 0) = 0;
		virtual IReactor* instance() = 0; 

	private:

};