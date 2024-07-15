#include <iostream>
#include <string>
using namespace std;

#define SIZE 5;

int main()
{

#pragma region 선택 정렬
	// 주어진 리스트 중에 최소값을 찾아서 맨 앞에 위치한 결과를 교체하는 방식으로 정렬하는 알고리즘입니다.

	int List[5] = { 6, 5, 2, 8, 10 };
	int min = 0;
	int MinIndex = 0;

	cout << "현재 리스트는 : ";
	for (int i = 0; i < 5; i++)
	{
		cout << List[i] << " ";
	}
	cout << endl;



	for (int i = 0; i < 5; i++)
	{
		min = List[i];
		for (int j = i + 1; j < 5; j++)
		{
			if (min > List[j])
			{
				min = List[j];
				MinIndex = j;
			}
		}

		std::swap(List[i], List[MinIndex]);
	}

	for (const int& element : List)
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;

}