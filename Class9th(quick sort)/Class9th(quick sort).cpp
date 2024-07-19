#include <iostream>

using namespace std;

#define SIZE 8

void merge(int list[], int start, int middle, int end)
{
    int count = 0;
    int left = start;
    int right = middle + 1;

    int* TempList = new int[end - start + 1];

    //두 부분의 배열을 병합합니다.
    while (left <= middle && right <= end)
    {
        if (list[left] <= list[right])
        {
            TempList[count++] = list[left++];

        }
        else
        {
            TempList[count++] = list[right++];
        }

    }

    while (left <= middle)
    {
        TempList[count++] = list[left++];
    }

    while (right <= end)
    {
        TempList[count++] = list[right++];
    }
    // 원본 배열에 정렬된 임시 배열의  값을 복사한다.

    for (int i = 0; i < end - start + 1; i++)
    {
        list[start + i] = TempList[i];
    }
    delete TempList;

}

void divide(int list[], int start, int end)
{
    int middle = (start + end) / 2;

    if (start < end)
    {
        divide(list, start, middle);
        divide(list, middle + 1, end);
        merge(list, start, middle, end);
    }

    merge(list, start, middle, end);

}



int main()
{
#pragma region 병합정렬
    // 하나의 리스트를 두 개의 균둥한 크기로 분할하고 분할된
    // 부분 리스트를 정렬한 다음, 두개의 정렬된 부분 리스트를 합하여
    // 전체가 정렬된 리스트가 되게하는 방법입니다.

    // 1. 리스트의 길이가 0 또는 1이며 이미 정렬된 것으로 본다.
    // 2 그렇지 않을 경우 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의 
    // 두 부분 리스트로 나눈다.
    // 각 부분 리스트를 재귀적으로 병합 정렬을 이용하여 정렬한다.
    // 두 부분 리스트를 다시 하나의 정렬된 리스트로 병합한다.

    int list[SIZE] = { 3, 5, 2, 7, 4, 1, 8, 6 };
    int left = 0;
    int right = SIZE - 1;

    divide(list, left, right);

    for (int i = 0; i < SIZE; i++)
    {
        cout << list[i] << endl;
    }

#pragma endregion


    return 0;
}