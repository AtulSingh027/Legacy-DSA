#include <iostream>
using namespace std;

int main()
{
      string str;
      cout << "Enter the string: ";
      getline(cin, str);
      int len= str.length();

      for (int i = 0; i < len; i++)
      {
            if (i == 0)
            {
                  str[i] -= 32;
            }
            if (str[i] == ' ')
            {
                  str[i + 1] -= 32;
            }
            cout << str[i];
      }
      
      return 0;
}