
#include <iostream>
using namespace std;

int Mostwater(int arr[], int len)
{
    int Maxwtr = 0;
    int LP = 0, RP = len - 1;

    while (LP < RP) // O(n)
    {
        int w = RP - LP;
        int ht = min(arr[LP], arr[RP]);

        int CurrWtr = w * ht;
        Maxwtr = max(Maxwtr, CurrWtr);

        arr[LP] < arr[RP] ? LP++ : RP--;
    }

    return Maxwtr;
}

int main()
{
    int container[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int len = sizeof(container) / sizeof(container[0]);

    int ans = Mostwater(container, len);

    cout << "Max water store in container is: " << ans;

    return 0;
}
