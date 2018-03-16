#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
//#include "algoritmiHeader.h"

using namespace std;

void AppleAnOrange()
{
	int c=0, c1=0;
	int houseStart, houseEnd;
	int applePosition, orangePosition;
	int applesOnTheGorund, orangesOnTheGround;

	std::cin >> houseStart >> houseEnd;
	std::cin >> applePosition >> orangePosition;
	std::cin >> applesOnTheGorund >> orangesOnTheGround;

	std::vector<int> apples(applesOnTheGorund);
	std::vector<int> oranges(orangesOnTheGround);

	for (int i = 0; i < applesOnTheGorund; i++)
		std::cin >> apples[i];

	for (int i = 0; i < orangesOnTheGround; i++)
		std::cin >> oranges[i];

	for (int i = 0; i < apples.size(); i++)
	{
		if (apples[i]+applePosition >= houseStart && apples[i]+applePosition <= houseEnd)
			c++;
	}

	for (int i = 0; i < oranges.size(); i++)
	{
		if (oranges[i]+orangePosition >= houseStart && oranges[i]+orangePosition <= houseEnd)
			c1++;
	}

	std::cout << c << std::endl << c1;
}
