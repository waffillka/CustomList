#include "CustomList.h"
#include "Sin.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <cmath>

int main()
{
   /* auto list = new CustomList<int>();
    for (int i = 0; i < 6; i++)
    {
        list->push_front(i);
    }

    int m = 0;
    auto arr = list->ToArray(m);

    for (int i = 0; i < m; i++)
    {
        std::cout << arr[i] << std::endl;
    }*/


    auto ssin = new Sin();
    std::cout << ssin->GetSinWithEpsilon(0.56, 0.00000001) << std::endl;
    std::cout << sin(0.56) << std::endl;
    std::cout << std::abs(-0.56) << std::endl;

}

