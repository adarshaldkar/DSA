#include<stdio.h>
#include <iostream>
using namespace std;
int main(){
    // sum of first 10 even nos
    int sum=0;
    for (int i=20;i<=40;i++){
        if(i%2==0){
            sum+=i;
        }
        
    }
    cout<<"first 10 nos sum is" << sum << endl;


    // int sum=0;
    // int count=0;
    // for (int i=2; count<10; i+=2){
    //     sum=sum+i;
    //     count++;
    // }
    // cout<<"Sum of first 10 even numbers is: " << sum << endl;

    return 0;
}