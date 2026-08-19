/*

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

*/

// 99.Write a Program for sum of 5 numbers using user input array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    int result=0;
    
   for(int i=0;i<5;i++){
    cout<<"enter the number: ";
    cin>>arr[i];
   }

 for(int i=0;i<5;i++){
    result=result+arr[i];
    cout<<"total array sum is : "<<result<<endl;
 }
    return 0;
}