#include <iostream>
using namespace std;

void reverse(string str, int len)
{
      string rstr = "";
      int end = len - 1;
      for (int i = 0; i < len; i++)
      {
            rstr += str[end];
            end--;
      }
      cout << "the reverse string is: " << rstr << endl;
}

void uppercase(string str, int len)
{
      for (int i = 0; i < len; i++)
      {
            if (islower(str[i]))
                  str[i] -= 32;
      }
      cout << "The string in uppercase: " << str << endl;
}

void countchar(string str)
{
      int count = str.length();
      cout << "The total characters in the string: " << count << endl;
}

int main()
{
      string str;
      cout << "Enter the string: ";
      getline(cin, str);
      int len = str.length();

      int choice;
      while (1)
      {
            cout << "Select an option to perform on the string: " << endl;
            cout << "1 for reverse string." << endl;
            cout << "2 for convert to uppercase." << endl;
            cout << "3 for count characters in string." << endl;
            cout << "4 for Exit the code." << endl;
            cin >> choice;
            cout<<"======================"<<endl;

            switch (choice)
            {
            case 1:
                  reverse(str, len);
                  cout<<"========================"<<endl;
                  break;
            case 2:
                  uppercase(str, len);
                  cout<<"===================="<<endl;
                  break;
            case 3:
                  countchar(str);
                  cout<<"====================="<<endl;
                  break;
            case 4:
                  if(choice == 4)
                  {
                        cout<<"Code Exited..."<<endl;
                        return -1;
                        break;
                  }
                  break;
                  
            default:
                  cout << "Invalid option Please try again.." << endl;
                  break;
            }
      }

      return 0;
}
