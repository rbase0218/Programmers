#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int mul = 1;
    
    vector<int> ansVec;
    
    while(n > 0)
    {
        ansVec.push_back(n % 3);
        n /= 3;
    }
    
    while(!ansVec.empty())
    {
        answer += mul * ansVec.back();
        
        ansVec.pop_back();
        
        mul *= 3;
    }
    
    return answer;
}