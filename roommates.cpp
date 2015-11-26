#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

int uniqueRand(vector<int> nums)
{
	int randnum = rand() % 6 + 1;
	for (size_t i = 0; i < nums.size(); i++)
	{
		if (nums[i] == randnum)
			return -1;
	}
	return randnum;
}


int main()
{
	vector<string> names;
	names.push_back("Ed");
	names.push_back("Sam");	
	names.push_back("Karl");
	names.push_back("Matt");
	names.push_back("Luke");
	names.push_back("Greg");

	vector<int> rooms;
	srand(time(NULL));

	while (true)
	{
		if (rooms.size() == 6)
			break;

		int generatedNum = uniqueRand(rooms);
		if (generatedNum == -1)
			continue;
		else
			rooms.push_back(generatedNum);
	}

	for (size_t i = 0; i < names.size(); i++)
	{
		cout << names[i] << " gets room " << rooms[i] << endl;
	}

	return EXIT_SUCCESS;
}