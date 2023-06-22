#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;

    for (auto test : strlist) {
        answer.push_back(test.length());
    }

    return answer;
}