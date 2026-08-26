#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<"size of vector is "<<vec.size()<<endl;
    vec.push_back(6);
    cout<<"size of vector is "<<vec.size()<<endl;

    vec.pop_back();
    cout<<"size of vector is "<<vec.size()<<endl;

    cout<<"capacity of vector is "<<vec.capacity()<<endl;

    return 0;
}

