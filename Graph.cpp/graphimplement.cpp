

// #include <iostream>
// using namespace std;
// const int row = 3;
// const int col = 3;

// bool isiderected(int graph[][col], int m, int n)
// {
//       if (graph[m][n] == 1)
//       {
//             cout << "connected with each other!..\n";
//             return true;
//       }
//       else
//       {
//             cout << "Not Connected to each other!..\n";
//             return false;
//       }
// }

// void addEdge(int graph[][col], int m, int n)
// {
//       if (graph[m][n] == 0)
//       {
//             graph[m][n] = 1;
//       }

// }

// void RemveEdge(int graph[][col], int m, int n)
// {
//       if (graph[m][n] == 1)
//       {
//             graph[m][n] = 0;
//       }
// }

// void printgraph(int graph[][col])
// {
//       for (int i = 0; i < col; i++)
//       {
//             for (int j = 0; j < row; j++)
//             {
//                   cout << graph[i][j] << " ";
//             }
//             cout << endl;
//       }
// }

// int main()
// {
//       int graph[][3] = {{0, 1, 0}, {1, 0, 1}, {0, 1, 0}};
//       printgraph(graph);

//       if (!isiderected(graph,1,1)){
//             cout<<"\nBefore Not Connected : \n";
//             printgraph(graph);
//             addEdge(graph,1,1);
//       }
//       cout<<endl;

//       cout<<"After Ad Edge: ";
//       printgraph(graph);
//       cout<<"Connected Now.\n";

//       return 0;
// }

//!===========================================================================
        
//     ?UPDTAED ADJECENCY MATRIX(GRAPH) CODE...

// *===================================================================

// #include <iostream>
// using namespace std;
// const int row = 3;
// const int col = 3;
// // for undirected non-weighted connected graph
// void createGraph(int graph[][col])
// {

//       for (int i = 0; i < row; i++)
//       {
//             for (int j = 0; j < col; j++)
//             {
//                   graph[i][j] = 0;
//             }
//       }
// }
// bool checkConnection(int graph[][col], int src, int dst)
// {
//       // validation logic
//       if (graph[src][dst] == 1)
//       {
//             cout << "Connected with each other!!\n";
//             return true;
//       }
//       else
//       {
//             cout << "Not connected with each other!!\n";
//             return false;
//       }
// }
// void addEdge(int graph[][col], int src, int dst)
// {
//       if (graph[src][dst] == 0)
//       {
//             graph[src][dst] = 1;
//             graph[dst][src] = 1;
//       }
// }
// void removeEdge(int graph[][col], int src, int dst)
// {
//       if (graph[src][dst] == 1)
//       {
//             graph[src][dst] = 0;
//             graph[dst][src] = 0;
//       }
// }
// void printGraph(int graph[][col])
// {

//       for (int i = 0; i < row; i++)
//       {
//             for (int j = 0; j < col; j++)
//             {
//                   cout << graph[i][j] << " ";
//             }
//             cout << endl;
//       }
// }
// int main()
// {
//       int graph[row][col];

//       createGraph(graph); // 0

//       // to initialize the graph
//       graph[0][1] = 1;
//       graph[1][0] = 1;
//       graph[0][2] = 1;
//       graph[2][0] = 1;

//       cout << "Original graph\n";
//       printGraph(graph);

//       if (!checkConnection(graph, 1, 2))
//       {
//             addEdge(graph, 1, 2);
//       }
//       cout << "Updated graph\n";
//       printGraph(graph);
// }

// *================================================================

#include <iostream>
using namespace std;
const int row = 3,col=3;

void CreateGraph(int graph[][col])
{
      for(int i=0 ; i < row ; i++)
      {
            for(int j = 0 ; j < col ; j++)
            {
                  graph[i][j] = 0;
            }
           
      }
}

bool isConnected(int graph[][col],int src, int des){

      if(graph[src][des] == 1)
      {
          cout<<"Connected With Each Other !";
          return true;
      }
      else{
            cout<<"Not Connected With Each Other !";
            return false;
      }
}

void PrintGraph(int graph[][col])
{
      for(int i=0 ; i < row ; i++)
      {
            for(int j = 0 ; j < col ; j++)
            {
                  cout<<graph[i][j]<<" ";
            }
            cout<<endl;
           
      }  

}

void addEdge(int graph[][col],int src, int des)
{

      if(graph[src][des] == 0)
      {
            graph[src][des] = 1;
            graph[des][src] = 1;
      }

}

void RemoveEdge(int graph[][col],int src, int des)
{

      if(graph[src][des] == 1)
      {
            graph[src][des] = 0;
            graph[des][src] = 0;
      }

}

int main()
{

      int graph[row][col];
      CreateGraph(graph);

      graph[0][1] = 1;
      graph[1][0] = 1;
      graph[0][2] = 1;
      graph[2][0] = 1;


      PrintGraph(graph);

     if(!isConnected(graph,1,2))
     {
        addEdge(graph,1,2);
     }

     cout<<"\nUpDated Connected Graph: \n";

     PrintGraph(graph);




    return 0;
}
