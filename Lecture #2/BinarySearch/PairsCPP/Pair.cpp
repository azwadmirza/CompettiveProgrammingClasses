#include<bits/stdc++.h>
using namespace std;

int main(){

    //pair of 2 ints
    pair<int,int>p1;
    p1.first=10;
    p1.second=20;
    cout<<p1.first<<" "<<p1.second<<endl;

    //pair of a bool and an int
    pair<bool,int>p2;
    p2.first=true;
    p2.second=20;
    cout<<p2.first<<" "<<p2.second<<endl;

    //pair of an int and a float
    pair<int,float>p3;
    p3.first=10;
    p3.second=20.6f;
    cout<<p3.first<<" "<<p3.second<<endl;

    //pair of a long long and a double
    pair<long long,double>p4;
    p4.first=1000000000;
    p4.second=20.896975432343;
    cout<<p4.first<<" "<<p4.second<<endl;


    //pair of a string and a float
    pair<string,float>p6;
    p6.first="apple";
    p6.second=20.6f;
    cout<<p6.first<<" "<<p6.second<<endl;


    pair<double,char>p5={20.89894534234,'a'};
    
    
    return 0;
}