#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void createNum(int minNum, int maxNum, vector<int>& answer, string beforeString = "5")
{
    int count = stoi(beforeString);
    const vector<string> base = { "0" ,"5" };

    if (count > minNum) {
        answer.push_back(count);
    }

    for (int i = 0; i <= 1; ++i) {
        int addCount = stoi(beforeString + base[i]);

        if (addCount > maxNum)
            break;

        createNum(minNum, maxNum, answer, beforeString + base[i]);
    }

    return;
}

vector<int> solution(int l, int r) {
    vector<int> answer;

    createNum(l, r, answer);

    sort(answer.begin(), answer.end());

    if (answer.size() == 0)
    {
        answer.push_back(-1);
    }

    return answer;
}