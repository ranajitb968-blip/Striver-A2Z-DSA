/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int name[] ={22,32,52,62,12,42};

    for(int i=0;i<=5;i++){
    cout<<"arr print of name "<<name[i]<<endl;
   
    }

    return 0;
}


//user input from array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks[5];

    //take input
    for(int i=0;i<=4;i++){
        cout<<"enter the marks of student :"<<i+1<<endl;;
        cin>>marks[i];
    }

    //output given
    for(int i=0;i<=4;i++){
        cout<<"marks of student is : "<<marks[i]<<endl;
    }
    return 0;
}



//accessing array elements
#include <bits/stdc++.h>
using namespace std;
int main(){
  int name[]={22,32,52,62,12,42};
  cout<<"the value of name[0] is : "<<name[0]<<endl;

  cout << "the value of name[2] is : " << name[2] << endl;
}


//update array elements
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int name[] = {22, 32, 52, 62, 12, 42};
     name[0]=60;
     name[5]=1;

    cout << "the value of name[0] is : " << name[0] << endl;
    cout << "the value of name[5] is : " << name[5] << endl;
}

*/

// 94.	Write a program to insert an element in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5};
    int n, pos;
    cout << "Enter the number to insert: ";
    cin >> n;
    cout << "Enter the position to insert: ";
    cin >> pos;
    for (int i = 5; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = n;
    cout << "The updated array is: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
