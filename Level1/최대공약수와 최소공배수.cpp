#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int r;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int lcm(int a, int b)
{
    return a / b;
}

vector<int> solution(int n, int m) {
    int num = gcd(n, m);

    return { num, lcm(n * m, num) };
}