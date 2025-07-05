#include <iostream>
#include <vector>
using namespace std;

int MaxProfit(vector<int> &prices)
{
    int LukyDay = 0, bestDay = prices[0];

    for(int i=0;i<prices.size();i++)
    {
        if(prices[i] > bestDay)
        {
            LukyDay = max(LukyDay,prices[i]-bestDay);
        }
        bestDay = min(bestDay,prices[i]);
    }

    return LukyDay;
}

int main(){

    vector <int> max = {7,1,5,3,6,4};


    cout<<"The Maximum Profit We Earn Should : "<<MaxProfit(max);
    return 0;
}
