#include <bits/stdc++.h>
using namespace std;

int main() {
    //for loop
    for(int i=0;i<10;i++){
        cout<<i<<" ";
    }
    
    //while loop
    int i=0;
    while(i<10){
        cout<<i<<" ";
        i++;
    }

    //do while loop
    i=0;
    do{
        cout<<i<<" ";
        i++;
    }while(i<10);

    //for loop with break
    for(int i=0;i<10;i++){
        if(i==5){
            break;
        }
        cout<<i<<" ";
    }

    //for loop with continue
    for(int i=0;i<10;i++){
        if(i==5){
            continue;
        }
        cout<<i<<" ";
    }

    //while loop with break
    i=0;
    while(i<10){
        if(i==5){
            break;
        }
        cout<<i<<" ";
        i++;
    }

    //while loop with continue
    i=0;
    while(i<10){
        if(i==5){
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
    }

    //do while loop with break
    i=0;
    do{
        if(i==5){
            break;
        }
        cout<<i<<" ";
        i++;
    }while(i<10);

    //do while loop with continue
    i=0;
    do{
        if(i==5){
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
    }while(i<10);

    //for loop with multiple variables
    for(int i=0,j=10;i<10;i++,j--){
        cout<<i<<" "<<j<<endl;
    }

    //infinite for loop with break
    for(int i=0;;i++){
        if(i==10){
            break;
        }
        cout<<i<<" ";
    }

    //infinite while loop with break
    i=0;
    while(true){
        if(i==10){
            break;
        }
        cout<<i<<" ";
        i++;
    }
    

    

    return 0;
}