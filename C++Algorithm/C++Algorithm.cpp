#include <iostream>
#include <string>
using namespace std;

bool Check(int num)
{
    if (num == 0 || num == 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num = 4;
    if (Check(num) == true)
    {
        cout << "소수 확인" << endl;
    }
    else
    {
        cout << "소수가 아님" << endl;
    }

    return 0;

}