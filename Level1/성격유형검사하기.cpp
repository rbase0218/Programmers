#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
	string answer;
	map<string, int> surMap;
	string key;

	for (int i = 0; i < survey.size(); ++i) 
	{
		key = (choices[i] < 4) ? survey[i][0] : survey[i][1];
		surMap[key] += (choices[i] < 4) ? 4 - choices[i] : choices[i] - 4;
	}

	answer += (surMap["R"] >= surMap["T"]) ? "R" : "T";
	answer += (surMap["C"] >= surMap["F"]) ? "C" : "F";
	answer += (surMap["J"] >= surMap["M"]) ? "J" : "M";
	answer += (surMap["A"] >= surMap["N"]) ? "A" : "N";

	return answer;
}