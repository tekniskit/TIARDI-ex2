class NetworkEvent {
public:
	HANDLE getHandle();
	void setHandle(HANDLE h);
	
	unsigned int getEventType();
	void setEventType(unsigned int eventType);

private:
	HANDLE handle_;
	unsigned int eventType_;
};