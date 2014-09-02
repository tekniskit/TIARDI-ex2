class EventHandler{
public:
	virtual void handle_run(HANDLE handle) = 0;
private:
	virtual Event map_parse_event(HANDLE handle) = 0;
};