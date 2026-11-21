/*Take three sides and check if they form a valid triangle */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int side1 , side2, side3;
    
    cout<<"enter the side of three side triangle  : ";
    cin>>side1>>side2>>side3;

    if(side1+side2>side3){
        if(side1+side3>side2){
            if(side2+side3>side1){
                cout<<"this is valid triangle ";
            }else{
                cout<<"this is not valid triangle ";
            }
        }else{
            cout<<"this is not valid triangle ";
        }
    }else {
        cout<<"this is not valid triangle ";
    }

    return 0;
}


/*if the sides form a valid triangle , determine whethyer it is equilateral, isosceles or scalene */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int side1 , side2, side3;

    cout<<"enter the valid triangle value : ";
    cin>>side1>>side2>>side3;

    if(side1==side2 && side1==side3 && side2==side3){
        cout<<"this is valid triangle ";
    }else if(side1==side2 || side1==side3 || side2==side3){
        cout<<"this is isosceles triangle ";
    }else{
        cout<<"this is scalene triangle ";
    }

    return 0; 
}

/*Take marks ( 0 - 100) and print the corresponding grade ( A / B / C / D /F )*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int marks;

    cout<<"enter your marks : ";
    cin>>marks;

    if(marks >= 0 && marks <= 40){
        cout<<"grade fail";
    }else if(marks >=41 && marks<=60){
        cout<<"grade D";
    }else if(marks >=61 && marks <= 80){
        cout<<" grade C " ; 
    }else if (marks >=81 && marks <=90){
        cout<<"grade B";
    }else if(marks >=91 && marks<=100){
        cout<<"grade A";
    }else{
        cout<<"this is not eligible marks with grade .";
    }
    return 0;
}

/*Check if one of two given numbers is a multiple of the other.  */

/* Take the hour of the day ( 0 - 23) and print "Good Morning ", "Good Afternoon" , "Good Evening" , "Good Night". */
#include<bits/stdc++.h>
using namespace std;

int main(){

    int hours;

    cout<<"enter the hours";
    cin>>hours;

    if(hours >=0 && hours <= 6){
        cout<<"this is good morning ";
    }else if (hours >=7 && hours <= 10 ){
        cout <<"this is good afternoon ";
    }else if(hours >= 11 && hours <= 16 ){
        cout<<"this is good evening ";
    }else if (hours >= 17 && hours <= 23){
        cout<<"this is good night ";
    }
    return 0;
}


/*Check voting eligibility for a given age (18 + )*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;

    cout<<"enter your age ";
    cin>>age;

    if(age >= 18 && age <= 100){
        cout<<"you are eligibility for voting . ";
    }else{
        cout<<" you are not eligibility for voting . ";
    }
    return 0;
}

/*Take two numbers and determine whether both are even , both are odd , or one is even and one is odd . */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int number1 , number2;

    cout<<"enter the  number . ";
    cin>> number1 >> number2;

    if(number1 % 2 == 0 && number2 % 2 ==0 ){
        cout<<"both are even ";
    }else if(number1 % 2!= 0 && number2 % 2 != 0){
        cout<<"both are both odd ";
    }else if(number1 % 2 != 0 && number2 % 2 == 0){
        cout<<"number1 is odd and number2 is even ";
    }else if (number1 % 2 ==0 && number2 % 2 !=0) {
        cout<<"this is number2 odd and number1 is even ";
    }else{
        cout<<"this is not valid number ";
    }

    return 0;
}

