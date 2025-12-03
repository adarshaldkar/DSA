#include<stdio.h>
#include <iostream>
using namespace std;
int main(){
    // sum of even nos betweeen 20 and 40 
    // Optimized version
    int sum = 0;
    for (int i = 20; i <= 40; i += 2) {
        sum += i;
    }

    return 0;
}