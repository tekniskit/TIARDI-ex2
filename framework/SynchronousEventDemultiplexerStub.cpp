#include "SynchronousEventDemultiplexerStub.h"
#include "HandleStub.h"

NetworkEvent SynchronousEventDemultiplexerStub::getNetworkEvent() {
	NetworkEvent networkEvent;
	HandleStub* handleStub;

	calledCounter_++;

	if (calledCounter_ == 1) {
		handleStub = new HandleStub("1;Event1");

		networkEvent.setEventType(1);
		networkEvent.setHandle((Handle*) handleStub);

		return networkEvent;
	}

	if (calledCounter_ == 2) {
		handleStub = new HandleStub("2;Event2");

		networkEvent.setEventType(2);
		networkEvent.setHandle((Handle*) handleStub);

		return networkEvent;
	}

	if (calledCounter_ == 3) {
		handleStub = new HandleStub("3;Event3");

		networkEvent.setEventType(3);
		networkEvent.setHandle((Handle*) handleStub);

		calledCounter_ = 0;

		return networkEvent;
	}
}