#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
	int numer = 0;
	int denom = 0;
	int r = 0;

	denom = denom1 * denom2;
	numer = numer1 * denom2 + numer2 * denom1;

	r = gcd(denom, numer);

	denom /= r;
	numer /= r;

	answer.push_back(numer);
	answer.push_back(denom);
	
	return answer;
}