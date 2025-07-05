// #include <iostream>
// using namespace std;

// int main() {
    // string str;
    // cout << "Enter the string: ";
    // getline(cin, str);
    // 
    // for (int i = 0; i < str.length(); i++) {
        // 
        // if (str[i] >= 'a' && str[i] <= 'z') {
        //  
            // str[i] -= 32;
        // }

    // }
    // 
    // cout << "Uppercase string with spaces: " << str << endl;
    // return 0;
// }


#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    for (int i=0;i<str.length();i++){
        if (str[i]>=65 && str[i]<=97){
            str[i]+=32;
        }
        else{
            
        }
        cout<<str[i];
    }
    return 0;
}