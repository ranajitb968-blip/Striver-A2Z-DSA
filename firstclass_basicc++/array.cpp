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

*/
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
