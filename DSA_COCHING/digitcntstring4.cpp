#include <iostream>
using namespace std;
int main()
{
      string str;
      cout << "enter the string: ";
      getline(cin, str);
      int count = 0;
      for (int i = 0; i < str.length(); i++)
      {
            if (str[i] >= '1' && str[i] <= '9')
            {
                  cout << str[i] << " ";
                  count++;
            }
      }
      cout << endl;
      cout << "All digit in the string :" << count << endl;
      return 0;
}