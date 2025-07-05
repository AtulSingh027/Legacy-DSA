#include <iostream>
using namespace std;
int main(){
      string str;
      cout<<"enter the string:";
      getline(cin,str);

      string reversed;
      string word;
      for (int i=0;i<str.length();i++){
            if (str[i]!=' '){
                  word+=str[i];
            }
            else{
                  reversed=word+" "+reversed;
                  word="";
            }
            
      }
      reversed=word+" "+reversed;
      cout<<"the reverse words is :"<<reversed<<endl;

      return 0;
}