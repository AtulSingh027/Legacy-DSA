#include <iostream>
using namespace std;
int main()
{
      string str;
      cout << "Enter the string: ";
      getline(cin, str);
      int count=1;
      for (int i = 0; i < str.length(); i++)
      {
            if (str[i] == ' ' || str[i] == '/n')
            {
                  count++;
            }
      }
      cout << "Total wors in string is : " << count << endl;
      return 0;
}