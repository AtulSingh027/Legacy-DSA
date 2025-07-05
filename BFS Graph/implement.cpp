#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Perform BFS Traversal
void BFS(int startNode, const vector<vector<int>> &adjList)
{
    vector<bool> visited(adjList.size(), false); // To keep track of visited nodes
    queue<int> q;                                // Queue for BFS traversal

    // Start BFS from the given start node
    q.push(startNode);//0
    visited[startNode] = true;//0 = true or visit

    while (!q.empty())
    {
        int currentNode = q.front();//0
        q.pop();
        cout << currentNode << " "; // Print the current node 0

        // Visit all unvisited neighbors of the current node
        for (int neighbor : adjList[currentNode])
        {
            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main()
{
    // Adjacency list representation of the graph
    vector<vector<int>> adjList = {
        {1, 3, 4}, // Neighbors of node 0
        {0, 2},    // Neighbors of node 1
        {1},       // Neighbors of node 2
        {0, 5},    // Neighbors of node 3
        {0},       // Neighbors of node 4
        {3}        // Neighbors of node 5
    };

    cout << "BFS Traversal starting from node 0: ";
    BFS(0, adjList);
    return 0;
}

// ! ===================================================================

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// void BFSImplement(int StartNode, const vector<vector<int>> &adjList)
// {
//     vector<bool> Visited(adjList.size(), false);
//     queue<int> q;

//     q.push(StartNode);
//     Visited[StartNode] = true;

//     while (!q.empty())
//     {
//         int CurrentNode = q.front();
//         q.pop();
//         cout << CurrentNode << " ";

//         for (int Neighbour : adjList[CurrentNode])
//         {
//             if (!Visited[Neighbour])
//             {
//                 q.push(Neighbour);
//                 Visited[Neighbour] = true;
//             }
//         }
//     }
// }

// int main()
// {

//     vector<vector<int>> adjList = {
//         {1, 2, 3},    // Neighbors of node 0
//         {0, 2},       // Neighbors of node 1
//         {0, 1, 3},    // Neighbors of node 2
//         {0, 2, 4, 5}, // Neighbors of node 3
//         {3, 5},       // Neighbors of node 4
//         {3, 4}        // Neighbors of node 5
//     };

//     cout << "Travesal Of Graph With BFS Algorithem : ";
//     BFSImplement(0, adjList);

//     return 0;
// }