
/*this is problem statement are basic or operators problem
q) write a program to print your name,date of birth and mobile number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int phone_number;
    string name;
    int dob;

    cout<<"my phone_number is : 9609794466"<<endl;
    cout<<"my name is : Ranajit bera"<<endl;
    cout<<"my date of birth is : 29/09/2005"<<endl;
    return 0;
}

q) write a progrma to enter length and breadth of a rectangle and finish its perimeter
firstly you must be know that rectangle perimeter law 𝑃=2×(𝑙+𝑤)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    int p;
    int w;

    cin>>l;
    cin>>w;
    p = 2*(l+w);

    cout<<"A rectangle perimeter is:" <<p <<endl;
}

q)write a progrma to enter length and breadth of a rectangle and finish its area.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int l;
    int w;

    cin>>l;
    cin>>w;
    a=(l*w);
    cout<<"A rectangle area is : "<<a<<endl;
}