#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
//#include "algoritmiHeader.h"

using namespace std;

void DivisibleSumPairs()
{
  int n, k, counter = 0;
  std::cin >> n >> k;

  std::vector <int> v(n);
  for (int i = 0; i < n; i++)
  {
    std::cin >> v[i];
  }

  for (int i = 0; i < n-1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if ((v[i] + v[j]) % k == 0)
        counter++;
    }
  }

  std::cout << counter << std::endl;  
}
