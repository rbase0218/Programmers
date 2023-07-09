#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
	int yNum = 0;
	int pNum = 0;
	
	for (int i = 0; i < s.size(); ++i) 
	{
		if (s[i] == 'p' || s[i] == 'P')
		{
			pNum++;
		}

		if (s[i] == 'y' || s[i] == 'Y')
		{
			yNum++;
		}
	}

	return (pNum == yNum) ? true : false;
}