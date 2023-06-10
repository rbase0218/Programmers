#include <string>
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


int solution(vector<string> babbling) {
	vector<string> answers = { "aya", "ye", "woo", "ma" };
	int result = 0;

	for (auto bab : babbling) {
		for (auto answer : answers) {
			if (bab.find(answer) != string::npos) {
				size_t fIndex = bab.find(answer);
				size_t eIndex = answer.length();

				cout << " Origin : " << bab << "   MATCH : " << answer << "  F : " << fIndex << " E : " << eIndex << endl;
				bab.replace(bab.begin() + fIndex, bab.begin() + fIndex + eIndex, "9");
				cout << " REMOVE : " << bab << endl << endl;
			}
		}
		sort(bab.begin(), bab.end());
		bab.erase(unique(bab.begin(), bab.end()), bab.end());

		if (bab == "9") {
			result++;
		}
	}
	return result;
}

int main(void) {
	vector<string> test = { "ayaye", "uuuma", "ye", "yemawoo", "ayaa" };
	vector<string> test2 = { "aya", "yee", "u", "maa", "wyeoo" };

	int tt = solution(test);
	cout << tt << endl;

	return 0;
}