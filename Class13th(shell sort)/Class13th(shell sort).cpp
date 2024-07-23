#include <iostream>

using namespace std;

#define SIZE 10

int main()
{

#pragma region 쉘 정렬

    // 먼 거리의 요소들을 먼저 정렬하여 배열을 부분적으로
    // 정렬한 후, 점진적으로 더 작은 간격을 사용하는 정렬 알고리즘입니다.

    int gap = 0;
    int j = 0;
    int key = 0;
    int list[SIZE] = { 5,2,8,1,3,9,0,7,6,4 };

    for (gap = SIZE / 2; gap > 0; gap /= 2)
    {
        if (gap % 2 == 0)
        {
            gap++;
        }
        for (int i = gap; i < SIZE; i++)
        {
            key = list[i];
            for (j = i; j >= gap && list[j - gap] > key; j -= gap)
            {
                list[j] = list[j - gap];
            }
            list[j] = key;
        }
    }

    for (const int& element : list)
    {
        cout << element << " ";
    }

    /*int gap = size / 2;
    int i = 0;
    while (true)
    {
        while (list[i] != list[gap])
        {
            if (list[i] > list[gap + i])
            {
                int empty = list[i];
                list[i] = list[gap + i];
                list[gap + i] = empty;
            }
            i++;
        }

    }*/

    //while (gap >= 1)
    //{
    //    /*for (int i = 0; i < gap; i++)
    //    {
    //        if (list[i] > list[gap + i])
    //        {
    //            int empty = list[i];
    //            list[i] = list[gap + i];
    //            list[gap + i] = empty;
    //        }
    //    }
    //    gap = gap / 2;*/

    //    int i = 0;
    //    while(i < )

    //}



#pragma endregion






    return 0;
}