#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.emplace_back(5);



    cout<< vec.size() <<endl; //! Number OF Elements in vectore
    cout<<vec.capacity()<<endl; //* Size of new copy data of memory Capcity
     cout<<"Value At Index 3 is : "<<vec[4]<<endl;
     cout<<"Value At Index 3 is : "<<vec.at(4)<<endl;//Both Give Value Of An Index

    vec.pop_back();//! Delete Data From Last 
    for(int val : vec)
    {
        cout<< val <<" ";
    }
    cout<<endl;

    cout<<"Front Element : "<<vec.front() <<endl << "Last Element : "<<vec.back()<<endl;

    // vec.clear();// It Is Clear the Whole Data Of Vetore
    // cout<<"If Empty It Show 1 if Not Then Show 0 : "<<vec.empty()<<endl;

    cout << "It Gives the Location Of 1st Element Address  : "<< *(vec.begin())<<endl; // In This We USe * For Get The Value OF Adress
    cout << "It Gives the Location Of Last Element Address  : "<< *(vec.end())<<endl; // In This We USe * For Get The Value OF Adress

    return 0;
}