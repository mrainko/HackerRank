#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
//#include "algoritmiHeader.h"

using namespace std;

void Kangaroo()
{
  	int x1,v1, x2, v2;
	std::cin >> x1 >> v1 >> x2 >> v2;

	if (v1 <= v2)
		std::cout << "NO" << std::endl;
	else
	{
		if ((x2 - x1) % (v1 - v2) == 0)
			std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
	}
}
