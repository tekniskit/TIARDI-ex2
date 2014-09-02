class NetworkEvent {
public:
	HANDLE getHandle();
	void setHandle(HANDLE h);
	
	EventType getEventType();
	void setEventType(eventType);

private:
	HANDLE handle_;
	EventType eventType_;
};