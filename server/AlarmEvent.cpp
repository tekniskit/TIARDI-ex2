#include "AlarmEvent.h"





int AlarmEvent::getPriority(){
	return priority_;
}

void AlarmEvent::setPriority(int i){
	priority_ = i;
}

string AlarmEvent::getComment(){
	return comment_;
}

void AlarmEvent::setComment(string c){
	comment_ = c;
}