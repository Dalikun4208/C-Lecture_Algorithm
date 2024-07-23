#include <iostream>

using namespace std;

#define SIZE 10

int Fuction(int a, int b)
{
    int result = 0;
    
    while (true)
    {
        int i = 2;
        while (true)
        {
            if (a % i == 0 && b % i == 0)
            {
                if (result == 0)
                {
                    result = result + i;
                }
                else
                {
                    result = result * i;
                }
                a = a / i;
                b = b / i;
                break;
            }
            else
            {
                i++;
            }
        }
        if (a % i > 0 && b % i > 0)
        {
            break;
        }

    }

    return result;
}

int main()
{
    
#pragma region 1123

    
    cout << "값은 : " << Fuction(30, 48) << endl;
#pragma endregion


    return 0;
}