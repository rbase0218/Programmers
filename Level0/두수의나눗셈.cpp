#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int num1, int num2) {
    int result = (double)num1 / num2 * 1000;
    return result;
}

int solution(int num1, int num2) {
    return (num1 * 1000) / num2;
}