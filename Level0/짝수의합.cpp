#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int result = 0;
    
    for(;n > 0; n--) {
        result += ((n % 2) == 0) ? n : 0;
    }
    
    return result;
}