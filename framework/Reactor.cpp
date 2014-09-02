#include "Reactor.h"

void Reactor::register_handler(Event_Handler* handler, Event_Type type)
{

}

void Reactor::remove_handler(Event_Handler* handler, Event_Type type)
{

}


void Reactor::handle_events(Time_Value* time)
{
	NetworkEvent event = getNetworkEvent();

}

IReactor& Reactor::instance()
{
	static Reactor inst;
	return inst;
}