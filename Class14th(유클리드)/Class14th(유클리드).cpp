﻿#include <iostream>

using namespace std;

void Fuction2(int a, int b)
{
    int left;
    if (a < b)
    {
        swap(a, b);  // Ensure a is greater than or equal to b
    }

    left = a % b;

    if (left == 0)
    {
        cout << "최대공약수는 : " << b << endl;
    }
    else
    {
        Fuction2(b, left);
    }
}

int main()
{
#pragma region 유클리드 호제법
    // 2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로,
    // 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘입니다.
    //
    Fuction2(78696, 19332);

#pragma endregion

    return 0;
}