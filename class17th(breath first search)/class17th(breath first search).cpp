#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define SIZE 6

class Graph
{
private:
    queue<int> queue;
    bool visited[SIZE];
    vector<int> graph[SIZE];
public:
    Graph()
    {
        for (int i = 0; i < SIZE; i++)
        {
            visited[i] = false;
        }
    }
    void Insert(int vertex, int edge)
    {
        graph[vertex].push_back(edge);
        graph[edge].push_back(vertex);
    }

    void search(int start)
    {
        queue.push(start);
        visited[start] = true;

        while (queue.empty() == false)
        {
            int x = queue.front();
            queue.pop();
            cout << x << " ";
            for (int i = 0; i < graph[x].size(); i++)
            {
                int next = graph[x][i];
                if (visited[next] == false)
                {
                    queue.push(next);
                    visited[next] = true;
                }
            }
        }
    }
};

int main()
{

#pragma region 깊이 우선 탐색

    Graph graph;

    graph.Insert(1, 2);
    graph.Insert(1, 3);

    graph.Insert(2, 4);

    graph.Insert(3, 4);
    graph.Insert(3, 5);

    graph.Insert(5, 4);

    graph.search(1);

#pragma endregion


    return 0;
}