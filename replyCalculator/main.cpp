#include <iostream>
#include <string>
#include "replyCalculator.h"

using namespace std;

int main()
{
	int choice = 0;

	while (1)
	{
		printMenu();

		cin >> choice;

		if (choice == 1)
			replyCalculator();

		else if (choice == 2)
			break;

		else
			continue;
	}
}
