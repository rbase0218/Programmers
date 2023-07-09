#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
	int result = 0;
	int index = right - left;

	while (index >= 0)
	{
		for (int i = 1; i <= left / 2; ++i) {
			if (left % i == 0)
				result++;
		}
		result++;

		answer += (result % 2 == 0) ? left : -left;

		left += 1;
		result = 0;
		index--;
	}

	return answer;
}