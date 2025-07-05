// #include <iostream>
// using namespace std;

// class TwoStack
// {

// public:
//       int top1, top2,size;
//       int *arr;

//       TwoStack()
//       {
//             arr = new int[size];
//             top1 = -1;
//             top2 = size;
//       }

//       void push1(int data)
//       {
//             if (top1 + 1 == top2)
//             {
//                   cout << "Stack 1 is overflow..\n";
//             }
//             else
//             {
//                   top1++;
//                   arr[top1] = data;
//             }
//       }

//       int Pop1()
//       {
//             if (top1 == -1)
//             {
//                   cout << "Stack 1 is Empty..\n";
//                   return -1;
//             }
//             else
//             {
//                   int item = arr[top1];
//                   top1--;
//                   return item;
//             }
//       }

//       void push2(int data)
//       {
//             if (top1 == -1)
//             {
//                   cout << "Stack 2 is overflow..\n";
//             }
//             else
//             {
//                   top2--;
//                   arr[top2] = data;
//             }
//       }
//       int Pop2()
//       {
//             if (top2 == size)
//             {
//                   cout << "Stack 2 is Empty..\n";
//                   return -1;
//             }
//             else
//             {
//                   int item = arr[top2];
//                   top2++;
//                   return item;
//             }
//       }


//       void traverseStack1()
//       {
//          for(int i = top1 ; i>=0 ; i--)
//          {
//             cout<<arr[i]<<" ";
//          }
//          cout<<endl;
//       }

//       void traverseStack2()
//       {
//           for(int i = top2 ; i<size ; i++)
//           {
//             cout<<arr[i]<<" ";
//           }
//           cout<<endl;
//      }
// };

// int main()
// {
//       TwoStack st;

//       st.push1(10);
//       st.push1(15);
//       st.push1(20);

//       st.push2(40);
//       st.push2(50);
//       st.push2(60);
//       st.push2(70);
      
//       st.traverseStack1();
//       st.traverseStack2();

//       cout<<"Stack 1st Popped element: "<<st.Pop1()<<endl;
//       cout<<"Stack 2nd Popped Element : "<<st.Pop2()<<endl;

//       st.traverseStack1();
//       st.traverseStack2();



//       return 0;
// }




#include <iostream>
using namespace std;

class solution{
      public:
      int top1,top2,size=100;
      int *arr;

      solution(){
            arr = new int[size];
            top1 = -1;
            top2 = size;

      }

      void push1(int data)
      {
            if(top1 + 1 == top2)
            {
                  cout<<"Stack 1 is Overflow..\n";

            }
            else{
                  top1++;
                  arr[top1]=data;
            }
      }
        void push2(int data)
       {
        if(top2-1==top1)
        {
              cout<<"Stack 2 is Overflow..\n";
        }
        else{
              top2--;
              arr[top2]=data;
        }
      }

      int pop1(){
            if(top1==-1)
            {
                return -1;  
            }
            else{
                  int item = arr[top1];
                  top1--;
                  return top1;
            }
      }

       int pop2(){
       if(top2==size)
       {
           return -1;  
       }
       else
       {
             int item = arr[top2];
             top2++;
             return top2;
       }
 }

    void traverse1()
    {
      for(int i = top1;i>=0;i--)
      {
            cout<<arr[i]<<" ";
      }
      cout<<endl;
    }

     void traverse2()
     {
        for(int i = top2;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
      }


};
int main(){
      solution st;
      st.push1(10);
      st.push1(20);
      st.push1(30);

      st.push2(40);
      st.push2(50);
      st.push2(70);

      st.traverse1();
      st.pop1();
      st.traverse1();

      
      return 0;
}