class Tuple {
public:
	Tuple(unsigned int eventType, EventHandler* eventHandler);
	~Tuple();
	EventHandler* getEventHandler();
	void setEventHandler(EventHandler *eh);

	unsigned int getEventType();
	void setEventType(unsigned int et);

private:
	EventHandler *eventHandler_;
	unsigned int eventType_;
};