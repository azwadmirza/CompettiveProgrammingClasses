#include <bits/stdc++.h>
using namespace std;

int main() {
    //see if age is right to vote
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You can vote"<<endl;
    }
    else{
        cout<<"You cannot vote"<<endl;
    }

    //find greatest of 3 numbers
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is the greatest"<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<" is the greatest"<<endl;
    }
    else{
        cout<<c<<" is the greatest"<<endl;
    }

    //find greatest of 2 numbers easy way
    int x,y;
    cin>>x>>y;
    cout<<max(x,y)<<" is the greatest"<<endl;

    //find greatest of 3 numbers easy way
    int p,q,r;
    cin>>p>>q>>r;
    cout<<max(p,max(q,r))<<" is the greatest"<<endl;

    //find smallest of 2 numbers
    int m,n;
    cin>>m>>n;
    cout<<min(m,n)<<" is the smallest"<<endl;

    //find smallest of 3 numbers
    int u,v,w;
    cin>>u>>v>>w;
    cout<<min(u,min(v,w))<<" is the smallest"<<endl;

    //find greatest of 2 numbers with ternary operator
    int d,e;
    cin>>d>>e;
    cout<<(d>e?d:e)<<" is the greatest"<<endl;

    //give an example of a switch statement
    int day;
    cin>>day;
    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid day"<<endl;
    }
    

    return 0;
}