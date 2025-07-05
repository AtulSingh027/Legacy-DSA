#include <iostream>
#include <vector>

using namespace std;

int main()
{
      // Create a vector of vectors to represent the adjacency list
      vector<vector<int>> adjList;

      // Add edges to the graph
      adjList.push_back({2});
      adjList.push_back({1, 3});
      adjList.push_back({1});

      // Print the adjacency list
      for (int i = 0; i < adjList.size(); i++)
      {
            cout << i + 1 << ": ";
            for (int j = 0; j < adjList[i].size(); j++)
            {
                  cout << adjList[i][j] << " ";
            }
            cout << endl;
      }

      return 0;
}