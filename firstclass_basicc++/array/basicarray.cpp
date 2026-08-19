// 99.Write a Program for sum of 5 numbers using Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int ans=0;

    for(int i=0;i<5;i++){
       ans=ans+arr[i];
       cout<<"total sum is: "<<ans<<endl;
    }

    return 0;
}