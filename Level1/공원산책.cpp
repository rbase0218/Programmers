vector<int> solution(vector<string> park, vector<string> routes) {
	int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
	map<char, int> dirMapping = { {'N', 0}, {'S', 1}, {'W', 2}, {'E', 3} };

	int startPosX = 0;
	int startPosY = 0;

	int nextPosX = 0;
	int nextPosY = 0;

	for (int i = 0; i < park.size(); ++i)
	{
		for (int j = 0; j < park.size(); ++j)
		{
			if (park[i][j] == 'S')
			{
				startPosX = i;
				startPosY = j;
				break;
			}
		}
	}

	for (auto& route : routes)
	{
		int dirX = dir[dirMapping[route[0]]][0];
		int dirY = dir[dirMapping[route[0]]][1];

		int index = route[2] - '0';

		nextPosX = startPosX;
		nextPosY = startPosY;

		while (index > 0)
		{
			nextPosX += dirX;
			nextPosY += dirY;

			if (nextPosX < 0 || nextPosX >= park.size() ||
				nextPosY < 0 || nextPosY >= park.size() ||
				park[nextPosX][nextPosY] == 'X')
			{
				break;
			}

			index--;
		}

		if (index <= 0)
		{
			startPosX = nextPosX;
			startPosY = nextPosY;
		}
	}

	return { startPosX, startPosY };
}