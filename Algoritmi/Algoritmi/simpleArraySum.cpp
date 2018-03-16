#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
//#include "algoritmiHeader.h"

using namespace std;

void simpleArraySum()
{
	int n, sum = 0;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; i++)
		sum += v[i];

	cout << sum << endl;
}