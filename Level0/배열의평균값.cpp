#include <string>
#include <vector>
#include <numeric>

using namespace std;

// double solution(vector<int> numbers) {
//     return ((double)accumulate(numbers.begin(), numbers.end(), 0) / numbers.size());
// }

// accumulate는 3번째 매개변수의 타입에 따라서 반환 값이 달라진다.
double solution(vector<int> numbers) {
    return accumulate(numbers.begin(), numbers.end(), .0) / numbers.size();
}