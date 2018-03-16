#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
//#include "algoritmiHeader.h"

using namespace std;

void BirthdayChocolate()
{
  int n;
	std::cin >> n;

	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}

	int d, m;
	std::cin >> d >> m;

	int o = 0;
	int sum = 0;
	int counter = 0;

	if (v.size() == 1)
	{
		if (v[0] == d)
			counter++;
	}
	else
	{
		while (o <= (v.size() - m))
		{
			for (int i = o; i < m + o; i++)
				sum += v[i];

			if (sum == d)
				counter++;
            
			sum = 0;
			o++;
		}
	}
	std::cout << counter << std::endl;
}
