#include <iostream>
#include <string>
using namespace std;

#define SIZE 7



int main()
{

#pragma region 퀵 정렬
	// 기준점을 획득한 다음 해당 기준점을 기준으로 배열을 나누고 한 쪽에는 기준점보다 
	// 작은 값들이 위치하고 다른 한쪽에는 기준점보다 큰 값들이 위치하도록 
	// 정렬하는 알고리즘입니다.

	// 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여 모든 배열이 기본 배열이 될 때까지
	// 반복하면서 정렬합니다.

	int list[SIZE] = { 5, 10, 3, 7, 2, 1, 8 };

	int pivot = 0;
	int left = pivot + 1;
	int right = SIZE - 1;

	while (left < right)
	{
		if (list[pivot] < list[left])
		{
			swap(list[left], list[right]);
		}
		else
		{
			left++;
		}

		if (list[pivot] > list[right])
		{
			swap(list[left], list[right]);
		}
		else
		{
			right--;
		}

	}

	cout << "정렬된 값은 : ";

	for (const int& element : list)
	{
		cout << element << " ";
	}

#pragma endregion


	return 0;

}