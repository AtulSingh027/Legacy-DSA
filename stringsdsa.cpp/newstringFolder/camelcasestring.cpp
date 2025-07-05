#include <iostream>
using namespace std;
int main()
{
      string str, mystr;
      cout << "Enter a string: ";
      getline(cin, str);

      for (int i = 0; i < str.length(); i++)
      {
            char c = str[i];
            if (c != ' ')
            {
                  mystr += c;
            }
            if (str[i] == ' ')
            {
                  str[i + 1] -= 32;
            }
      }
      
      cout << "The Camel case string is: " <<mystr << endl;
      return 0;
}

