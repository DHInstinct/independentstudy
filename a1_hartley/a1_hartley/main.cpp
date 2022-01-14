#include <iostream>
#include <vector>
#include <random>
#include <time.h>

#include "Timer.h"

using namespace std;



void DisplayVec(vector<int> a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] << endl;
	}
}

int main()
{

	Timer timer;

	srand(time(NULL));

	//cout << "This is working" << endl;	

	vector<int> vec;

	timer.Start();
	for (int i = 0; i < 1000; ++i)
	{

		vec.push_back(rand() % 100 + 1);
	}
	timer.Stop();
	timer.Report();

	//DisplayVec(vec);

	return 0;
}