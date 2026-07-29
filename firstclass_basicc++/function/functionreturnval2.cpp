// Returning a value from a function
#include <iostream>
using namespace std;

int addition(int, int);
int main(){
   int result= addition(20,30);
   cout<<" sum is: "<<result<<endl;
}
int addition(int a, int b){
    int sum=a+b;
    return sum;
}       