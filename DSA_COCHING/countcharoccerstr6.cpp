#include <iostream>
using namespace std;
int main()
{
      string str;
      char mystr;
      cout << "Enter the string: ";
      getline(cin, str);
      cout << "Enter the char to count:";
      cin >> mystr;
      int count=0;

      for (int i = 0; i< str.length(); i++)
      {
            if (str[i] == mystr)
            {
                  count++;
                  
            }
      }
      cout << "The total occuranes of "<<mystr<<" is :"<<count<<endl;
      return 0;
}