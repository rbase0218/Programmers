using namespace std;

long long solution(int price, int money, int count)
{
	long long result = 0;

	for (int i = 0; i <= count * price; i+=price) 
	{
		result += i;
	}

	return (money >= result) ? 0 : result - money;
}