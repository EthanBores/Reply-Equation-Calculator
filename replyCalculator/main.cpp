#include <iostream>
#include <string>
#include "replyCalculator.h"

using namespace std;

int main()
{
	int choice = 0;
	bool exit = false;

	while (!exit)
	{
		printMenu();

		cin >> choice;

		switch (choice)
		{
		case 1:	replyCalculator();
		case 2: exit = true;

		default: continue;
		}
	}
}