#include <iostream>
using namespace std;

int main()
{
      string str;
      cout << "Enter the String: ";
      getline(cin, str); // Suppose input is "abcdefg"

      int k;
      cout << "Enter the number of characters you want to reverse: ";
      cin >> k; // Suppose input is 2

      int n = str.length(); // Length of the string, n = 7

      for (int i = 0; i < n; i += 2 * k)
      {
            int end = min(i + k - 1, n - 1);
            
            for (int j = i; j < (i + end + 1) / 2; j++)
            {
                  swap(str[j], str[end - (j - i)]);
            }
      }

      cout << "Reversed String: " << str << endl;

      return 0;
}
