// "Copyright 2018 Sadiq
#include <iostream>
#include "data_info.h"


using namespace std;


FileInformations::FileInformations(string filepath) {
	ifstream  File(filepath.c_str());
	string lineinformation = ""; 
	int linenumber = 0;
    int linenumbersought;
    cout<<"enter line number: ";
    cin>> linenumbersought;
    cout<<endl<<endl;
    if (File.is_open()) {
        while ((getline(File,lineinformation, ',')&&(!File.eof()))) {
            linenumber++;          
            if(linenumber == linenumbersought) {
                Data s(lineinformation);
                vec.push_back(s);
			}
			
		}
		
	}
	 File.close();
}
    

	
