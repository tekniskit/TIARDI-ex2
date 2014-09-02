#pragma once
#include "IReactor.h"
#include "DemuxTable.h" 

class Reactor:IReactor
{

public:
	void register_handler(Event_Handler* handler, Event_Type type);
	void remove_handler(Event_Handler* handler, Event_Type type);
	void handle_events(Time_Value* = 0);

	static IReactor& instance();

private:
	Reactor() {};                   // Constructor? (the {} brackets) are needed here.
	// Dont forget to declare these two. You want to make sure they
	// are unaccessable otherwise you may accidently get copies of
	// your singleton appearing.
	Reactor(Reactor const&);        // Don't Implement
	void operator=(Reactor const&); // Don't implement

};