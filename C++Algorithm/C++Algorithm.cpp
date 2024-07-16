#include <iostream>
#include <string>
using namespace std;

#define SIZE 10

int main()
{

#pragma region 이진 탐색

	int left = 0;
	int right = SIZE - 1;
	int list[SIZE] = { 1, 5, 10, 12, 13, 16, 19, 22, 24, 27 };
	int middle = 0;

	int Answer = 0;
	int Value = 19;

	for (int i = 0; i < SIZE; i++)
	{
		if (list[i] == Value)
		{
			middle = i;
			break;
		}
	}
	
	while (true)
	{
		middle = (left + right) / 2;
		if (list[middle] > Value)
		{
			right = middle - 1;
		}
		else if (list[middle] < Value)
		{
			left = middle + 1;
		}
		else if (left == right && list[middle] == Value)
		{
			cout << "찾는 값의 인덱스는 : " << middle << endl;
			break;
		}
	}


#pragma endregion


	return 0;

}