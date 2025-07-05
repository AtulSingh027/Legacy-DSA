#include <iostream>
using namespace std;
int main()
{
      string str,mystr;
      cout << "Enter the string: ";
      getline(cin, str);
      int count=0;
      for (int i=0;i<str.length();i++){
            char c =str[i];
            if (c!= ' '){
                  mystr+=c;
                 
            }
            else{
               count++;
            }
      }
      cout<<"After removing space: "<<mystr<<endl;
      cout<<"Total space in input:"<<count<<endl;
      return 0;
}