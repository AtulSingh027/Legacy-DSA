
#include <bits/stdc++.h>
using namespace std;

int main()
{
      string str ;
      string Astr;
      cout<<"Enter the string : ";
      getline(cin ,str);
      cout<<"Enter second string: ";
      getline(cin,Astr);

      int len = str.length();
      int alen = Astr.length();
      
      if (len != alen)
      {
            cout << "the string is not Anagram." << endl;
            return 0;
      }

      // for (int i = 0; i < len; i++)
      // {
            // flag = 0;
            // for (int j = 0; j < alen; i++)
            // {

                  // if (str[i] == Astr[j])
                  // {
                        // flag = 1;
                        // Astr[j] = ' ';
                        // break;
                  // }
            // }
      // }

      sort(str.begin(),str.end());
      sort(Astr.begin(),Astr.end());

      if (str == Astr)
      {
            cout << "the string is Anagram!" << endl;
      }
      else{
            cout<<"no anagram."<<endl;
      }

      return 0;
}
