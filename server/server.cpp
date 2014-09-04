// server.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SynchronousEventDemultiplexerStub.h"
#include "SynchronousEventDemultiplexer.h"
#include "PatientEventHandler.h"
#include "AlarmEventHandler.h"
#include "Reactor.h"


int _tmain(int argc, _TCHAR* argv[])
{
	AlarmEventHandler *alarmEventHandler= new AlarmEventHandler();
	PatientEventHandler *patientEventHandler = new PatientEventHandler();
	SynchronousEventDemultiplexerStub *stub = new SynchronousEventDemultiplexerStub();

	Reactor reactor(stub);
	reactor.registerHandler((EventHandler*)patientEventHandler, 1);
	reactor.registerHandler((EventHandler*)alarmEventHandler, 2);
	while (true)
	{
		reactor.handleEvents();
	}
	
	return 0;
}

