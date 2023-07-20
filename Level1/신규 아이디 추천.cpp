#include <string>
#include <set>
#include <iostream>
#include <vector>
#include <regex>

using namespace std;


string solution(string new_id) {
	string temp = "";

    // 1단계 & 2단계
	for (char id : new_id)
	{
		if (isdigit(id) || isalpha(id) || id == '_' || id == '.' || id == '-')
		{
			temp += (isupper(id) && isalpha(id)) ? tolower(id) : id;
		}
	}

	new_id = temp;

	// 3단계
	new_id = regex_replace(new_id, regex("[.]+"), ".");

	// 4단계
	if (new_id.front() == '.')
	{
		new_id.erase(0, 1);
	}
	else if (new_id.back() == '.')
	{
		new_id.pop_back();
	}

	// 5단계
	if (new_id.empty())
	{
		new_id.push_back('a');
	}

	// 6단계
	if (new_id.length() > 15)
	{
		new_id.erase(new_id.begin() + 15, new_id.end());
	}

	if (new_id.back() == '.')
	{
		new_id.pop_back();
	}

    // 7단계
	while (new_id.length() < 3)
	{
		new_id.push_back(new_id[new_id.length() - 1]);
	}

    return new_id;
}
