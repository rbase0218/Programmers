#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    return ((n * 12000) + (k * 2000)) - 1 * ((n / 10) * 2000);
}