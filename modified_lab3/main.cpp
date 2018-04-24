// "Copyright 2018 Sadiq

#include <iostream>
#include "titanic.h"
#include "data_info.h"

using namespace std;

void PrintData(Data data) {
	
	cout<<"survived: "<<data.survived_<<endl;
	cout<<"pclass: "<<data.pclass_<<endl;
	cout<<"sex: "<<data.sex_<<endl;
	cout<<"age: "<<data.age_<<endl;
	cout<<"sibsp: "<<data.sibsp_<<endl;
	cout<<"parch:"<<data.parch_<<endl;
	cout<<"fare: "<<data.fare_<<endl;
	cout<<"embarked: "<<data.embarked_<<endl;
	cout<<"class: "<<data.class_<<endl;
	cout<<"who: "<<data.who_<<endl;
	cout<<"adultmale: "<<data.adultmale_<<endl;
	cout<<"deck: "<<data.deck_<<endl;
	cout<<"embarktown: "<<data.embarktown_<<endl;
	cout<<"alive: "<<data.alive_<<endl;
	cout<<"alone: "<<data.alone_<<endl<<endl;
}


int main()
{
	FileInformations file("data.csv");
	for (int i=0; i<file.vec.size(); i++) {
		Data s = file.vec.at(i);
		PrintData(s);
	}
		
	return 0;
}
