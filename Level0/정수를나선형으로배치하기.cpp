#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <regex>

using namespace std;


vector<vector<int>> solution(int n) {
	vector<vector<int>> answer(n, vector<int>(n, -1));
	int dirX[4] = { 0, 1, 0, -1 };
	int dirY[4] = { 1, 0, -1, 0 };

	int dir = 0;

	int x = 0;
	int y = 0;

	int nextX = 0;
	int nextY = 0;

	for (int i = 1; i <= n * n; ++i) {
		answer[x][y] = i;

		nextX = x + dirX[dir];
		nextY = y + dirY[dir];

		if (nextX < 0 || nextX >= n || nextY < 0 || nextY >= n || answer[nextX][nextY] != -1) {
			dir = (dir + 1) % 4;

			nextX = x + dirX[dir];
			nextY = y + dirY[dir];
		}

		x = nextX;
		y = nextY;
	}

	return answer;
}

void main() {
	vector<vector<int>> test = solution(5);

	return;
}