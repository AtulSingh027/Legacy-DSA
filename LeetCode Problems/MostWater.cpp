
#include <iostream>
using namespace std;

int Mostwater(int arr[], int len)
{
    int Maxwtr = 0;

    for (int i = 0; i < len; i++) ---> 0(n^2)
    {
        for (int j = i + 1; j < len; j++)
        {
            int W = j - i;
            int ht = min(arr[i], arr[j]);
            int cuuwtr = W * ht;

            Maxwtr = max(Maxwtr, cuuwtr);
        }
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
