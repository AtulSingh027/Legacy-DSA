// #include <iostream>
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter the string: ";
//     getline(cin, str);
//     int start = 0, flag = 1;
//     int end = str.length() - 1;

//     while (start < end) {
//         if (str[start] != str[end]) { 
//             flag = 0;
//             break;
//         }
//         start++;
//         end--;
//     }

//     if (flag) {
//         cout << "The string is palindrome!" << endl;
//     } else {
//         cout << "The string is not palindrome" << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter The String: ";
    getline(cin,str);
      
     int start = 0,end = str.length()-1;
     int falg = 1;

     while(start < end)
     {
       if(str[start] != str[end])
       {
          falg=0;
          break;
       }

       start++;
       end--;
     } 


     if (falg == 1)
     {
          cout<<"String Is Palindrom!\n";
     }
     else{
        cout<<"String is Not Palindrom..\n";
     }
     


    return 0;
}