#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
//#include "algoritmiHeader.h"

using namespace std;

void GradingStudents()
{
  int n;
    std::vector<int> v;
    int grade;
    std::cin >> n;

    if (n >= 1 && n <= 60)
    {
      for (int i = 0; i < n; i++)
      {
        std::cin >> grade;

        if (grade >= 0 && grade <= 100)
        {
          if (grade >= 38)
          {
            int o = (grade / 5) + 1;
            o = o * 5;

            if ((o - grade) < 3)
            {
              v.push_back(o);
            }
            else
              v.push_back(grade);
          }
          else
            v.push_back(grade);
        }
        else
          i--;
      }
    }

    for (int i = 0; i < n; i++)
    {
      std::cout << v[i] << std::endl;
    }
  }
