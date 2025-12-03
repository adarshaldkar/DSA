// for priting the index of smallest and largest no
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
int marks[] = {15 , 10 , 20 , 5 , 4};
int size = 5;
int index;
int index1;
int smallest = INT_MAX;
int largest =INT_MIN;

for(int i=0; i<size; i++){
 smallest=min(marks[i],   smallest);
 largest=max(marks[i], largest);
if(smallest==marks[i]) {
index=i;
}

if(largest==marks[i]) {
index1=i;
}


}
cout << "Index of smallest number is : " << index <<endl;
cout << "Index of largest number is : " << index1 <<endl;
return 0;
}

