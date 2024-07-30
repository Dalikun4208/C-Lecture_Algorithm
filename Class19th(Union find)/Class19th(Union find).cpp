#include <iostream>
#include <vector>

#define SIZE 7

using namespace std;

class Graph
{
private:
    int Child[SIZE];
    int Parent[SIZE];

public:

    Graph()
    {
        for (int i = 0; i < SIZE; i++)
        {
            Child[i] = i;
            Parent[i] = i;
        }
    }

    int Find(int x)
    {
        int i = 1;
        while (true)
        {
            if (Child[i] == x)
            {
                return Parent[i];
            }
            i++;
        }
    }

    void Union(int x, int y)
    {
        if (Child[x] < Child[y])
        {
            Parent[x] = x;
            Parent[y] = x;
        }
        else
        {
            Parent[x] = y;
            Parent[y] = y;
        }
    }

    bool Same(int x, int y)
    {
        int Parent_x = Find(x);
        int Parent_y = Find(y);

        if (Parent_x == Parent_y)
        {
            cout << "같은 집합 " << endl;
            return true;
        }
        else
        {
            cout << "같은 집합이 아님 " << endl;
            return false;
        }

    }

};

int main()
{
#pragma region 유니온 파인드
    // 여러 노드가 존재할 때 어떤 노드가 다른 노드와 연결되어 있는지 확인하는 알고리즘입니다.
    // 유니온 파인드의 시간복잡도 O(mlogn) m은 연산의 갯수, n은 노드의 갯수
    // m이 n²에 가까울 때는 O(n² logn)이 된다.

    Graph graph;

    // 배열의 인덱스와 값이 같다면 루트 노드 발견
    // 부모 노드의 번호를 전달하면서, 루트 노드를 찾을떄까지 재귀함수 호출

    graph.Union(1, 2);
    graph.Same(1, 2);
    graph.Same(2, 3);
    graph.Union(2, 3);
    graph.Same(2, 3);
    graph.Same(1, 3);
#pragma endregion




    return 0;
}