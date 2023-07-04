#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <regex>
#include <map>

using namespace std;

void aroundCheck(int x, int y, vector<vector<int>>& board)
{
	int aroundPosX = 0;
	int aroundPosY = 0;

	for (int i = -1; i <= 1; ++i) 
	{
		for (int j = -1; j <= 1; ++j) 
		{
			aroundPosX = x + i;
			aroundPosY = y + j;

			if (aroundPosX < 0 || aroundPosX >= board.size() || aroundPosY < 0 || board.size() <= aroundPosY)
			{
				continue;
			}

			if (board[aroundPosX][aroundPosY] == 0)
			{
				board[aroundPosX][aroundPosY] = 999;
			}
		}
	}
}

int solution(vector<vector<int>> board)
{
	int answer = pow(board.size(), 2);

	for (int i = 0; i < board.size(); ++i) 
	{
		for (int j = 0; j < board.size(); ++j) 
		{
			if (board[i][j] == 1) 
			{
				board[i][j] = 999;

				aroundCheck(i, j, board);
			}
		}
	}

	for (int i = 0; i < board.size(); ++i)
	{
		for (int j = 0; j < board.size(); ++j)
		{
			if (board[i][j] == 999)
			{
				answer--;
			}
		}
	}
	
	return answer;
}