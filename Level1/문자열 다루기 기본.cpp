#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(string s) {
	bool answer = false;
    
	if (s.size() == 4 || s.size() == 6) 
    {
		sort(s.begin(), s.end(), greater<char>());
		answer = isdigit(s[0]);
	}
	
	return answer;
}