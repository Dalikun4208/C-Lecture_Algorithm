﻿#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define SIZE 8

class Graph
{
private:
    queue<int> queue;
    bool visited[SIZE];
    vector<int> graph[SIZE];
    int list[SIZE];
    int degree[SIZE];
public:
    Graph()
    {
        for (int i = 0; i < SIZE; i++)
        {
            visited[i] = false;
            list[i] = 0;
            degree[i] = i;
        }
    }
    void Insert(int vertex, int edge)
    {
        graph[vertex].push_back(edge);
        graph[edge].push_back(vertex);
    }

    void sort()
    {
        /*int degree = 0;

        for (int i = 0; i < graph[degree].size(); i++)
        {
            queue.push(graph[0][i]);
        }

        degree++;*/


        for (int i = 1; i < SIZE; i++)
        {
            if (degree[i] == 0)
            {
                queue.push(i);
            }
        }
        while (queue.empty() == false)
        {
            int x = queue.front();
            queue.pop();
            cout << x << " ";
            for (int i = 0; i < graph[x].size(); i++)
            {
                int start = graph[x][i];
                degree[start]--;
                if (degree[start] == 0)
                {
                    queue.push(start);
                }
            }
        }
    }
};

int main()
{

#pragma region 위상정렬
    // 방향 그래프에 존재하는 각 정점들의 선행 순서를 지키며,
    // 모든 정점을 차례대로 진행하는 알고리즘입니다.
    // 사이클이 발생하는 경우 위상 정렬을 수행할 수 없습니다.
    // DAG directed acyclic graph : 사이클이 존재하지 않는 그래프
    // 시간 복잡도 : O(V + E)
    // 1. 진입 차수가 0인 정점을 QUEUE에 삽입합니다.
    // 2. QUEUE에서 원소를 꺼내 연결된 모든 간선을 제거합니다.
    // 3, 간선 제거 이후에 진입 차수가 0이 된 정점을 QUEUE에 삽입합니다.
    // 4. QUEUE가 비어있을떄까지 2~3번을 반복 수행한다.

    Graph graph;

    graph.Insert(1, 2);
    graph.Insert(1, 5);

    graph.Insert(2, 3);

    graph.Insert(5, 6);

    graph.Insert(3, 4);

    graph.Insert(6, 4);

    graph.Insert(4, 7);



#pragma endregion



    return 0;
}