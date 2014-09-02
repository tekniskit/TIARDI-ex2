#include "Reactor.h"
#include "NetworkEvent.h"
#include "EventHandler.h"

void Reactor::register_handler(EventHandler* handler, Event_Type type)
{

}

void Reactor::remove_handler(EventHandler* handler, Event_Type type)
{

}


void Reactor::handle_events(Time_Value* time)
{
	NetworkEvent event = demultiplexer.getNetworkEvent();
	EventHandler* handler = handlerTabel.getHandler(event.getEventType());

	if (handler != nullptr)
	{
		handler->handleEvent(event.getHandle()); 
	}
}

IReactor& Reactor::instance()
{
	static Reactor inst;
	return inst;
}