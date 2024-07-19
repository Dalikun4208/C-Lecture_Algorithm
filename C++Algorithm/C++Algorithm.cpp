#include <iostream>

using namespace std;

#define SIZE 8

int fibo(int list[], int num)
{
    if (num <= 0)
    {
        list[0] = { 0 };
        return 0;
    }
    else if (num < 2)
    {
        list[num] = num;
        return num;
    }
    else
    {
        if (list[num] == 0)
        {
            list[num] = fibo(list, num - 1) + fibo(list, num - 2);
        }
        else
        {
            return list[num];
        }
    }

    
}

int main()
{

#pragma region 동적 계획법

    // 특정 범위까지의 값을 구하기 위해서 그것과
    // 다른 범위까지의 값을 이용하여 효율적으로 값을
    // 구하는 알고리즘

    // 메모리제이션
    // 프로그램이 동일한 계산을 반복해야할 때 이전에 계산한 값을 메모리에 저장함으로써
    // 동일한 계산을 반복 수행하는 작업을 제거하여 프로그램의 실행 속도를 향상시키는 기법이다.
    int num = 8;
    int list[8 + 1];
    fill_n(list, 8, 0);
    cout << fibo(list, num);

#pragma endregion


    return 0;
}