//compare two strings
//complete the program below. 

#include <iostream>
#include <string>
#include <console.h>
#include <simpio.h>

int main()
{
	string myName = "Rifki";
	while (true){
		cout<<"Enter your name (or 'quit' to exit):";
		string userName = getline ();
		if (userName == "Ali"){
			cout<<"Hi, Ali! Welcome back!" <<endl;
			else if (userName == "quit") {
			cout<<endl;
			break;
			else if (userName != myName){
				cout<<"Hello, "<<userName << endl;
		}   else {
			cout<<"Oh, it's you, "<<myName <<endl;
		}
				
			}
			}
		}
		return 0;
	}


