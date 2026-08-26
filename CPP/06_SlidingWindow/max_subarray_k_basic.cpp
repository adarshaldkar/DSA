#include <stdio.h>
#include <limits.h> 
#include <iostream>
using namespace std;
int nums[]={100,200,300,400};
int main(){
        int low=0;
        int high=1;
        int sum=0;
        int n=4;
        int res=0;
        for(int i=0;i<=high;i++){
            sum=sum+nums[i]; 
         }
        while(high<n){
            res=max(res,sum);
            low++;
            high++;
            
            if(high<n){
                sum=sum-nums[low-1];
                sum=sum+nums[high];
            }
        }
        return res;
}






