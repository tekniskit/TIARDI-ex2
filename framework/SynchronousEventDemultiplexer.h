#include "NetworkEvent.h"

class SynchronousEventDemultiplexer {
public:
	virtual NetworkEvent getNetworkEvent() = 0;
};