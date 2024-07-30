#include <iostream>
#include <vector>

#define SIZE 7

using namespace std;

class Graph
{
private:
    class Edge
    {
    private:
        int x;
        int y;
        int distance;
    public:
        Edge(int x, int y, int distance)
        {
            this->x = x;
            this->y = y;
            this->distance = distance;

        }
        int & x()
        {
            return x;
        }
        int& y()
        {
            return y;
        }
        int& distance()
        {
            return distance;
        }
    };
    vector<int> graph[SIZE];
public:
    Graph()
    {

    }
    void Insert(int x, int y, int distance)
    {
        graph.push
    }
};

int main()
{

#pragma region 신장 트리
    // 그래프의 모든 정점을 포함하면서 사이클이 존재하지 않는
    // 부분 그래프로, 그래프의 모든 정점을 최소 비용으로 연결하는 트리입니다.

    // 그래프의 정점의 수가 n개일때 간선의 수는 n-1개 입니다.

    // 최소 비용 신장 트리
    // 그래프의 간선들의 가중치 합이 최소인 신장 트리

#pragma endregion


    return 0;
}