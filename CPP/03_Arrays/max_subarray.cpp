#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main(){

    // BRUTE FORCE
    // vector<int> vec={1,2,3,4,5,6};
    // for(int st=0;st<vec.size();st++){
    //     for(int end=st;end<vec.size();end++){
    //         for(int i=st;i<=end;i++){
    //             cout<<vec[i]<<" ";
    //         }
    //         cout<<endl;
    //     }

    // }


    // Another Brute 
    vector<int> vec={1,2,3,4,5,6};
    int maxSum=INT_MIN;
    for(int st=0;st<vec.size();st++){
        int currentSum=0;
        for(int end=st;end<vec.size();end++){
            currentSum+=vec[end];
            maxSum=max(maxSum,currentSum);
        }
        cout<<endl;
    }
    cout<<"Maximum sum is: "<<maxSum<<endl;

    return 0;
}