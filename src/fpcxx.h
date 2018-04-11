#ifndef FPCXX_H_INCLUDED
#define FPCXX_H_INCLUDED

#include <algorithm>
#include <vector>

//Map, filter and reduce to use in vectors...
namespace fpcxx {
    //map: iterates over a vector transforming the data as function and returns the new vector
    template<typename T, typename F> std::vector<T> map(const std::vector<T>& data, F func);

    //filter: include or remove items that pass a condition
    template<typename T, typename F> std::vector<T> filter(const std::vector<T>& data, F condition);
    //template<typename T, typename F> void filter(std::vector<T>& data, F condition);

    //reduce
}

#endif // FPCXX_H_INCLUDED
