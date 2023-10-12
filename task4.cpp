#include <iostream>
using namespace std;
string projectTimeCalculation(float h, float d, float n);
main(){
    float h,d,n;
    cout<<"Enter the needed hours: ";
    cin>>h;
    cout<<"Enter the days that the firm has: ";
    cin>>d;
    cout<<"Enter the number of all workers: ";
    cin>>n;
    projectTimeCalculation(h,d,n);
}
string projectTimeCalculation(float h, float d, float n)
{
    int TotalTime;
    TotalTime= (d * n * 9);
    if (TotalTime <= h)
    {
        int time_tt;
        time_tt = h - TotalTime;
        cout << "Not enough time! " <<  time_tt << " hours needed.";
    }
    if (TotalTime > h)
    {
        int time_ttt;
        time_ttt =  TotalTime - h;
        cout <<"Yes! "<< time_ttt<<" hours left.";
    }
    return 0;
}