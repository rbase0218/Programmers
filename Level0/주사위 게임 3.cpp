#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int solution(int a, int b, int c, int d) {
	map<int, int> dupleMap;

	int p = 0;
	int q = 0;
	int r = 0;

	int answer = 0;
	int type = 0;

	dupleMap[a]++;
	dupleMap[b]++;
	dupleMap[c]++;
	dupleMap[d]++;

	for (auto duple : dupleMap)
	{
		type = (type > duple.second) ? type : duple.second;

		switch (duple.second)
		{
		case 4:
			return 1111 * duple.first;
                
		case 3:
			p = duple.first;

			break;
                
		case 2:
			if (p == 0)
			{
				p = duple.first;
			}
			else
			{
				q = duple.first;
			}

			break;
                
		case 1:
			answer = min({ a,b,c,d });

			if (q == 0)
			{
				q = duple.first;
			}
			else
			{
				r = duple.first;
			}

			break;
		}
	}

	return (type == 3) ? pow((10 * p) + q, 2) : (type == 2) ? (((p + q) * (abs(p - q))) * !(bool)r) + (q * r) : min({ a,b,c,d });
}