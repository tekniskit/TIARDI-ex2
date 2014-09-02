class DemuxTable{
public:
	EventHandler* getHandler(unsigned int eventType);
	void addHandler(unsigned int eventType, EventHandler* eh);
	void removeHandler(EventHandler* eventHandler);	
};