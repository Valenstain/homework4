#pragma once
#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
#include <cmath>

template<typename T1, typename T2>
void insert_sorted(T1& listData, T2 val)
{
    auto pos = std::lower_bound(listData.begin(), listData.end(), val);
    listData.insert(pos, val);

    for (auto v : listData)
        std::cout << v << " ";

    std::cout << std::endl;
}

void generateNumbers();