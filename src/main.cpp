#include <iostream>
#include "fpcxx.h"

using namespace std;
using namespace fpcxx;

int main() {

    vector<int> nums = {0,1,2,4,5,6};
    auto numsPlusOne = fpcxx::map(nums, [](int x){return x+1;});
    for(auto& num : numsPlusOne) {
        cout << num << endl;
    }
    auto justOdd = fpcxx::filter(numsPlusOne,[](int x){return x&1;});
    for(auto& num : numsPlusOne) {
        cout << num << endl;
    }

    return 0;
}
