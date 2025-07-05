#include <iostream>
using namespace std;
int main()
{
      string str;
      cout << "Enter the string: ";
      getline(cin, str);
      int count = 0;
      for (int i = 0; i < str.length(); i++)
      {

            if (str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117)
            {
                  cout << str[i] << " ";
                  count++;
            }
      }
      
      cout << "\nAll vovels int he string :" << count << endl;
      return 0;
}