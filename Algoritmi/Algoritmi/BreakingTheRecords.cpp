#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
//#include "algoritmiHeader.h"

using namespace std;

void BreakingTheRecords()
{
  int n;
  int min, max;
  int mn = 0, mx = 0;
  std::cin >> n;

  std::vector<int> v(n);

  for (int i = 0; i < v.size(); i++)
  {
    std::cin >> v[i];
  }

  min = v[0];
  max = v[0];

  for (int i = 1; i < n; i++)
  {
    if (v[i] > max)
    {
      max = v[i];
      mx++;
    }
    if (v[i] < min)
    {
      min = v[i];
      mn++;
    }
  }

  std::cout << mx << " " << mn << std::endl;
}
