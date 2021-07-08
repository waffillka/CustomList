#include "CustomList.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>

int main()
{
    auto list = new CustomList<int>();
    for (int i = 0; i < 6; i++)
    {
        list->push_front(i);
    }

    int m = 0;
    auto arr = list->ToArray(m);

    for (int i = 0; i < m; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}