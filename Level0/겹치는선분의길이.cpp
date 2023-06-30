#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
	int answer = 0;
	int arr[200] = { 0, };

	for (int i = 0; i < lines.size(); ++i) {
		int startNum = lines[i][0];
		int endNum = lines[i][1];

		if (startNum > endNum) {
			int temp = startNum;
			startNum = endNum;
			endNum = temp;
		}

		for (int j = startNum; j < endNum; ++j) {
			arr[j + 100]++;
		}
	};

	for (int i = 0; i < 200; ++i) {
		if (arr[i] > 1) answer++;
	}

	return answer;
}