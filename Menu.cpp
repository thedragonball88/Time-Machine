#include "Time.h"


void Time::menu()
{
	//consider design changes on the output

	// V2 challange - convert any given h/m/s into any other of choice

	//cout << "Menu started" << endl;
	int choice = 1;
	bool isOn = true;
	//cout << "Menu parameters created" << endl;
	cout <<"\n ********** \n"<< "How can i help you? " << endl;
	while (isOn != false) {
		cout <<"\n ********* \n"<< "1.Add time \n" << "2.Show current result \n" << "3.Exit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			//cout << "userinput" << endl;
			userInput();
			//cout << "calculating..." << flush;
			calculate();
			//cout << "calculated" << endl;
			break;
		case 2:
			//cout << "printtime" << endl;
			printTime();
			break;
		case 3:
			//cout << "Exiting..." << endl;
			isOn = false;
			break;
		default:
			cout << "Invalid selection, please choose one of the options provided... \n";
			break;
		}
	}
	cout << "\n **** \n"<< "closing menu" << endl;
}