#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <regex>
#include <map>
#include <set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	vector<int> answer(id_list.size(), 0);

	map<string, set<string>> punishmentConfirm;
	map<string, int> reportMap;

	string reporterTarget;
	string reporter;

	for (int i = 0; i < id_list.size(); ++i) 
	{
		reportMap[id_list[i]] = i;
	}

	for (auto& re : report)
	{
		stringstream ss(re);
		ss >> reporterTarget >> reporter;

		// 신고처리된 사람들이 들어있겠지.
		punishmentConfirm[reporterTarget].insert(reporter);
	}

	for (auto& re : punishmentConfirm)
	{
		if (re.second.size() >= k)
		{
			for (auto& r : re.second)
			{
				answer[reportMap[r]] += 1;
			}
		}
	}

	return answer;
}