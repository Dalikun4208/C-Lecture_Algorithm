﻿#include <iostream>
#include <string>
using namespace std;

int main()
{

#pragma region 시간 복잡도

    //특정 크기의 입력을 기준으로 할 때 필요한 연산횟수를 의미합니다.

#pragma region O(1) 상수 시간
    // 입력 크기와 상관 없이 일정한 시간복잡도를 가지는 시간입니다.
    // 배열의 원소 참조
#pragma endregion

#pragma region O(log n) 로그 시간
    //데이터의 크기에 따라 실행 시간이 로그 함수의 형태로 증가하는 시간 복잡도입니다.
    //2진 탐색
#pragma endregion

#pragma region O(n)선형 시간 
    // 입력에 따라 걸리는 시간이 선형적으로 증가되는 시간 복잡도.
    // for
#pragma endregion

#pragma region O(n²) 제곱 시간
    // 입력되는 데이터를 기준으로 n²만큼 시간이 증가하는 시간복잡도.
    // 2중 반복문 

#pragma endregion

#



#pragma endregion

#pragma region 공간 복잡도
    // 프로그램 실행과 완료에 얼마나 많은 공간이 필요한지 나타내는 척도.

#pragma region 고정 공간
    // 코드가 저장되는 공간으로 알고리즘 실행을 위해 시스템이 필요로 하는 공간입니다.
    // 배열
#pragma endregion

#pragma region 가변 공간
    // 문제를 해결하기 위해 알고리즘이 필요한 공간으로 순환 프로그램일 경우 순환 스택을 의미한다.
    // 재귀함수
#pragma endregion


#pragma endregion

#pragma region 브루트 포스 알고리즘
    // 가능한 모든 경우의 수를 탐색하면서 결과를 도출하는 알고리즘입니다.

    /*int password[3];
    password[0] = 3;
    password[1] = 5;
    password[2] = 7;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (password[0] == i && password[1] == j && password[2] == k)
                {
                    cout << "일치합니다." << endl;
                }
            }
        }
    }*/

#pragma endregion



    return 0;

}