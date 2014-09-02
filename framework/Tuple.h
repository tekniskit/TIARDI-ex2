class Tuple {
public:
	getEventHandler();
	setEventHandler(EventHandler *eh);

	getEventType();
	setEventType(EventType et);

private:
	EventHandler *eventHandler_;
	EventType eventType_;
};