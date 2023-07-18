#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
	int answer = 0;

	for (int i = 0; i < ingredient.size(); ++i) 
	{
		if (ingredient[i] == 1 && i + 3 < ingredient.size())
		{
			if (ingredient[i + 1] == 2 && ingredient[i + 2] == 3 && ingredient[i + 3] == 1)
			{
				answer++;

				ingredient.erase(ingredient.begin() + i, ingredient.begin() + i + 4);

				i = (i > 4) ? i - 3 : -1;
			}
		}
	}

	return answer;
}