#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr , int n , int m , int maxAllowedpages){  //o(n)
    int stu = 1; int pages = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxAllowedpages){
            return false;
        }
        if(pages + arr[i] <= maxAllowedpages){
            pages += arr[i];
        }
        else{
            stu++;
            pages = arr[i];
        }
    }
    return stu > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n , int m){   //o (logN )
    if(m > n){
        return -1;
    }

    int sum = 0;
    for(int i = 0 ; i < n ; i++){ //o(n)
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum; // range of possible answers 

    while(st <= end){     //o(logN)
        int mid = st + (end - st) / 2; 

        if(isValid(arr , n , m , mid)){ //left half
            ans = mid;
            end = mid - 1;
        }
        else{  //right half
            st = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = { 2 , 1, 3 , 4};

    int n = 4 , m = 2;


    cout<<allocateBooks(arr , n , m) <<endl;
}