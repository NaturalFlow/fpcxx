#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

template<typename T, typename F>
std::vector<T> mapL(const std::vector<T>& data, F func) {
    std::vector<T> transformedData;
    std::transform(data.begin(), data.end(),back_inserter(transformedData),func);
    return transformedData;
}
template<typename T, typename F>
std::vector<T> filter(const std::vector<T>& data, F condition) {
    std::vector<T> filtered;
    for(auto& item : data) {
        if(condition(item))
            filtered.push_back(item);
    }
    return filtered;
}
int main()
{
    vector<int> vet = {0,1,1,2,3,5,8};
    cout << "\n----------------";
    for(auto& fib : vet)
        cout << fib << ' ';
        
    auto m2x = mapL(vet,[](int x){return 2*x;});
    cout << "\n----------------";
    for(auto& num : m2x)
        cout << num << ' ';
        
    auto justOdd = filter(m2x, [](int x)->bool{return (x % 2 == 1);});
    cout << "\n----------------";
    for(auto& odd : justOdd)
        cout << odd << ' ';
    return 0;
}
