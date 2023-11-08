#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void even(ll num);
void odd(ll num);

void even(ll num){

    num= num/2;
    cout<<num<<' ';

    if(num==1) return;
    if(num%2){

        odd(num);
    }
    else{

        even(num);
    }
}

void odd(ll num){
    if(num==1) {
        return;
    }
    num= (num*3)+1;
    cout<<num<<' ';
    
    
    if(num%2){

        odd(num);
    }
    else{

        even(num);
    }
}

int main(){

    int num;
    cin>>num;
    cout<<num<<' ';

    if(num%2){

        odd(num);
    }
    else{

        even(num);
    }

    return 0;
}