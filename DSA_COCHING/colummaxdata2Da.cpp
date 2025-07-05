// #include <iostream>
// using namespace std;
// int main()
// {
//       int nums[2][3] = {{1, 2,3,}, { 4, 5,6,}};
//       int max;

//       cout << "Original matrix:" << endl;
//        for (int i = 0; i < 2; i++)
//       {
//          for (int j = 0; j < 3; j++)
//         {
//          cout << nums[i][j] << " ";
//         }
//          cout << endl;
//       }

//       cout << "===================" << endl;

//       for (int i = 0; i < 2; i++)
//       {
//             max = nums[i][0];

//             for (int j = 0; j < 3; j++)
//             {

//                   if (max < nums[i][j])
//                   {
//                         max = nums[i][j];
//                   }
//             }
//            cout<<"maximum is :"<<max<<endl;
//       }

//       return 0;
// }

#include <iostream>
using namespace std;
int main()
{
      int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

      cout << "Orignal Matrix :: " << endl;

      for (int i = 0; i < 2; i++)
      {
            for (int j = 0; j < 3; j++)
            {
                  cout << arr[i][j] << " ";
            }
            cout << endl;
      }

      int max = 0;

      for (int i = 0; i < 2; i++)
      {

            max = arr[i][0];
            for (int j = i; j < 3; j++)
            {
                  if (max < arr[i][j])
                  {
                        max = arr[i][j];
                  }
            }

            cout << "The Max Data Of Column : " << max<<endl;;
      }
     

      return 0;
}