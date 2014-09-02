#include "../server/Tuple.h"
Tuple::Tuple(unsigned int eventType, EventHandler* eventHandler){
	// Constructor
	eventType_ = eventType;
	eventHandler_ = eventHandler;
}
Tuple::~Tuple(){
	// Descructor?
	//eventHandler_ = null;
	//eventType = null;
}

EventHandler* Tuple::getEventHandler() {
	return eventHandler_;
}
void Tuple::setEventHandler(EventHandler *eh){
	eventHandler_ = eh;
}

EventType Tuple::getEventType(){
	return eventHandler_;
}
void Tuple::setEventType(unsigned int et){
	eventType_ = et;
}