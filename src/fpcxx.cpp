#include "fpcxx.h"

template<typename T, typename F>
std::vector<T> map(const std::vector<T>& data, F func) {
    std::vector<T> transformedData(data.size());
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


