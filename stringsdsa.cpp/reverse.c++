#include <iostream>
using namespace std;
int main()
{
      string str,rstr;
      cout << "Enter the string: ";
      getline(cin, str);
     
      int len=str.length();
      rstr.resize(len);

      int end;
      end=len-1;

      for (int i=0;i<len;i++){
         rstr[end]=str[i];
      end--;
      }
      
      rstr[len]='\0';

      cout<<"Reverse string: "<<rstr;

      return 0;
}