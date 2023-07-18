#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper)
{
	int startX, startY;
	int endX, endY;

	startX = startY = endX = endY = -1;

	for (int i = 0; i < wallpaper.size(); ++i) 
	{
		for (int j = 0; j < wallpaper[i].size(); ++j)
		{
			if (wallpaper[i][j] == '#')
			{
				if (startX > i || startX == -1)
				{
					startX = i;
				}

				if (startY > j || startY == -1)
				{
					startY = j;
				}

				if (endX <= i)
				{
					endX = i;
					endX++;
				}

				if (endY <= j)
				{
					endY = j;
					endY++;
				}
			}
		}
	}
    

	return { startX, startY, endX, endY };
}