#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> neg;
    vector<int> pos;
    int siz = nums.size();
    
    // Separate negative and positive numbers
    for(int i = 0; i < siz; i++){
        if (nums[i] < 0){
            neg.push_back(nums[i]);
        }
        else{
            pos.push_back(nums[i]);
        }
    }
    
    // Handle case: only positive numbers
    if(neg.size() == 0){
        for(int i = 0; i < pos.size(); i++){
            pos[i] = pos[i] * pos[i];
        }
        return pos;
    }
    
    // Handle case: only negative numbers
    if(pos.size() == 0){
        for(int i = 0; i < neg.size(); i++){
            neg[i] = neg[i] * neg[i];
        }
        reverse(neg.begin(), neg.end());
        return neg;
    }
    
    // Both negative and positive numbers exist
    int n = neg.size();
    int m = pos.size();
    vector<int> res(n + m);
    
    // Square negative numbers and reverse (since they become positive in descending order)
    for(int i = 0; i < n; i++){
        neg[i] = neg[i] * neg[i];
    }
    reverse(neg.begin(), neg.end());
    
    // Square positive numbers
    for(int i = 0; i < m; i++){
        pos[i] = pos[i] * pos[i];
    }
    
    // Merge two sorted arrays
    int i = 0, j = 0, id = 0;  // Initialize properly
    
    while(i < n && j < m){
        if(neg[i] <= pos[j]){
            res[id] = neg[i];
            i++;
        }
        else {
            res[id] = pos[j];
            j++;
        }
        id++;
    }
    
    // Add remaining elements from neg
    while(i < n){
        res[id] = neg[i];
        i++;
        id++;
    }
    
    // Add remaining elements from pos
    while(j < m){
        res[id] = pos[j];
        j++;
        id++;
    }
    
    return res;
}

int main(){
    vector<int> a{-4, -1, 2, 7, 10}; 
    
    cout << "Original array: ";
    for(int x : a) cout << x << " ";
    cout << endl;
    
    vector<int> result = sortedSquares(a);
    
    cout << "Squared array: ";
    for(int x : result) cout << x << " ";
    cout << endl;
    
    return 0;
}