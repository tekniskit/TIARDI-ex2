#include "SynchronousEventDemultiplexerStub.h"
#include "HandleStub.h"

NetworkEvent SynchronousEventDemultiplexerStub::getNetworkEvent() {
	NetworkEvent networkEvent;

	calledCounter_++;

	if (calledCounter_ == 1) {
		handle_ = HandleStub("1;Event1");

		networkEvent.setEventType(1);
		networkEvent.setHandle((Handle*) &handle_);

		return networkEvent;
	}

	if (calledCounter_ == 2) {
		handle_ = HandleStub("2;Event2");

		networkEvent.setEventType(2);
		networkEvent.setHandle((Handle*) &handle_);

		return networkEvent;
	}

	if (calledCounter_ == 3) {
		handle_ = HandleStub("3;dame;Kirsten");

		networkEvent.setEventType(3);
		networkEvent.setHandle((Handle*) &handle_);

		calledCounter_ = 0;

		return networkEvent;
	}
}