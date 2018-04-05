#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct todo
{
	char time[250], task[250];
};

int main()
{
	
	
	while(true)
	{
		cout << "a) Add Tasks\n";
		cout << "b) Delete Tasks\n";
		cout << "c) View Tasks\n";
		cout << "d) Exit\n";

		char option;
		cin >> option;

		switch(option)
		{
			case('d'):
				exit(EXIT_SUCCESS);
			case('c'):
				viewTasks();
				break;
			case('b'):
				deleteTask();
				break;
			case('a'):
				addTask();
				break;
			default:
				cout << "Invalid option!\n";
		}
	}
	return 0;
}
