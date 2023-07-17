#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
	vector<int> answer;

	map<char, int> termMap;

	int year = stoi(today.substr(0, 4)) - 2000;
	int month = stoi(today.substr(5, 2));
	int day = stoi(today.substr(8, 2));

	int totalDate;

	totalDate = (year * 28 * 12) + (month * 28) + day;

	for (auto& term : terms)
	{
		stringstream ss(term);
		char rank;
		int date;

		ss >> rank >> date;

		termMap[rank] = date;
	}

	for (int i = 0; i < privacies.size(); ++i)
	{
		stringstream ss(privacies[i]);
		string date;
		char rank;

		ss >> date >> rank;

		int fromYear = stoi(date.substr(0, 4)) - 2000;
		int fromMonth = stoi(date.substr(5, 2));
		int fromDay = stoi(date.substr(8, 2));

		int fromTotal = (fromYear * 28 * 12) + (fromMonth * 28) + fromDay + (termMap[rank] * 28);

		if (totalDate < fromTotal)
		{
			continue;
		}
        
		answer.push_back(i + 1);
	}

	sort(answer.begin(), answer.end());

	return answer;
}