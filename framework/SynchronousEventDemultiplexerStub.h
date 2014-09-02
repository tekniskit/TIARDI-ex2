#include "SynchronousEventDemultiplexer.h"

class SynchronousEventDemultiplexerStub : SynchronousEventDemultiplexer {
public:
	NetworkEvent getNetworkEvent();

private:
	unsigned int calledCounter_ = 0;
};