#include "Time.h"

void Time::userInput()
{
	cout << "Input minutes: " << flush;
	cin >> tempMinutes;
	cout << endl << "Input seconds: " << flush;
	cin >> tempSeconds;
}

void Time::adjustTime()
{
	while (minutes >= 60)
	{
		hours++;
		minutes -= 60;
		while (seconds >= 60)
		{
			minutes++;
			seconds -= 60;
		}
	}
}



void Time::calculate() 


{
	cout << endl << "\n Old seconds were: " << seconds<<flush;
	seconds += tempSeconds;
	adjustTime();
	cout << " New seconds are: " << seconds << endl;

	cout << endl << "\n Old minutes were: " << minutes << flush;
	minutes += tempMinutes;
	adjustTime();
	cout << " New minutes are: " << minutes << endl;
}


void Time::printTime()
{
	//cout << endl << "Your last selection is: "  << tempHours << " hours, " << tempMinutes << " minutes and " << tempSeconds << " seconds." << endl; //Last selection not needed
	cout << endl << "Total time added: " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds." << endl;
}

