#include <iostream>
using namespace std;

void dectobianry(int num)
{
      int decimaltobin[32];
      int i = 0, len;
      while (num > 0)
      {
            len = 0;
            decimaltobin[i] = num % 2;
            num /= 2;
            i++;
      }
      for (int j = i - 1; j >= 0; j--)
      {
            cout << decimaltobin[j] << " ";
      }
}

int main()
{
      int num;
      cout << "Enter the number : ";
      cin >> num;
      dectobianry(num);

      return 0;
}