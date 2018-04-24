// "Copyright 2018 Sadiq

#include "titanic.h"

using namespace std;



Data::Data(std::string FileInformation) {
	
	stringstream DataStream(FileInformation);
	DataStream>>survived_;
	DataStream>>pclass_;
	DataStream>>sex_;
	DataStream>>age_;
	DataStream>>sibsp_;
	DataStream>>parch_;
	DataStream>>fare_;
	DataStream>>embarked_;
	DataStream>>class_;
	DataStream>>who_;
	DataStream>>adultmale_;
	DataStream>>deck_;
	DataStream>>embarktown_;
	DataStream>>alive_;
	DataStream>>alone_;

}



/*

int Data::getpclass_() {
	
	return pclass_;
}

bool Data::getsurvived_() {
	
	return survived_;
}

bool Data::getsex_() {
	
	return sex_;
}

float Data::getage_() {
	
	return age_;
}

int Data::getsibsp_() {
	
	return sibsp_;
}

int Data::getparch_() {
	
	return parch_;
}

float Data::getfare_() {
	
	return fare_;
}

string Data::getembarked_() {
	
	return embarked_;
}

string Data::getclass_() {
	
	return class_;
}

string Data::getwho_() {
	
	return who_;
}

bool Data::getadultmale_() {
	
	return adultmale_;
}


string Data::getdeck_() {
	
	return deck_;
}


string Data::getembarktown_() {
	
	return embarktown_;
}


bool Data::getalive_() {
	
	return alive_;
}


bool Data::getalone_() {
	
	return alone_;
}


*/
