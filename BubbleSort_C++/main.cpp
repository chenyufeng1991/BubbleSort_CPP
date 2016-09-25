//
//  main.cpp
//  BubbleSort_C++
//
//  Created by chenyufeng on 9/25/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 *  冒泡排序  时间复杂度O(n^2),空间复杂度O(1),稳定排序
 */

void BubbleSort(vector<int> &vec);

int main(int argc, const char * argv[])
{
    int arr[] = {3,4,5,1,8,9};
    vector<int> vectorArray(arr,arr + sizeof(arr)/sizeof(int));

    BubbleSort(vectorArray);
    vector<int>::iterator vectorIte;
    for (vectorIte = vectorArray.begin(); vectorIte != vectorArray.end(); vectorIte++)
    {
        cout << *vectorIte << " ";
    }

    return 0;
}

void BubbleSort(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
        for (int j = 1; j < vec.size() - i; j++)
        {
            if (vec[j - 1] > vec[j])
            {
                swap(vec[j - 1], vec[j]);
            }
        }
}

