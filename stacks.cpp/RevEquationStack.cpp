#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Sloution
{
      public:

      string RevrseEqaution(string str)
      {
            stack<char> st;
            string result = "";
            int n = str.length();
            int i = n-1;

            while(i>=0)
            {
                  if(str[i]=='+' || str[i] == '-' || str[i] == '*' || str[i]=='/')
                  {
                        while(!st.empty())
                        {
                              result += st.top();
                              st.pop();
                        }
                  result+=str[i];
                  }

                  else
                  {
                        st.push(str[i]);
                  }
                  i--;
            }

             while (!st.empty())
             {
                    result += st.top();
                    st.pop();
            }
            return result;

      }

};
int main()
{
      Sloution s1;


      string equation ;

      cout<<"Enter The Equation : ";
      cin>>equation;

      cout<<s1. RevrseEqaution(equation)<<endl;
           
      
      
      return 0;
}