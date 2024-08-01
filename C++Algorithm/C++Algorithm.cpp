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

#pragma region 다익스트라 알고리즘
    // 시작점으로부터 모든 노드까지의 최소 거리를 구해주는 알고리즘.
    // 1. distance 배열에 weight[시작점 노드]의 값들로 초기화합니다.
    // 2. 시작점을 방문 처리합ㄴ디ㅏ.
    // 3. distance 배열에서 최소 비용 노드를 찾고 방문처리를 한다.
    // 단, 이미 방문한 노드는 제외한다.
    // 4. 최소 비용 노드를 거쳐갈 지 고민해서 distance 배열에
    // 단, 이미 방문한 노드는 제외한다.
    // 5. 모든 노드를 방문할떄까지 3번 ~ 4번을 반복한다.
    // 방문하지 않은 노드중에서 가장 작은 distance를 가진 노드를 방문하고
    //  그 노드와 연결된 다른 노드까지의 거리를 계산합니다.
#pragma endregion



    return 0;
}