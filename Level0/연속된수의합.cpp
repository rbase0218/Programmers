#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;

    int mid = total / num;
    int count = num / 2;

    int startNum = 0;

    startNum = (num % 2 == 0) ? mid - count + 1 : mid - count;

    for (startNum; startNum <= mid + count; ++startNum) 
    {
        answer.push_back(startNum);
    }

    return answer;
}