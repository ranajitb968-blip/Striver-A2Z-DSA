/* problem 1 is take a number and print whether it's positive, negative, or zero */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int number;

    cout<<"enter the number : ";
    cin>>number;

    if(number >0){
        cout<<"this number is positive ";
    }else if (number < 0){
    cout<<"this number is negative ";
}else {
    cout<<"this number is zero ";
}
    return 0; 
}


/*check if a number is even or odd */

#include<bits/stdc++.h>
using namespace std;

int main (){
    int number ;

    cout<<"enter the number : ";
    cin>>number ; 


    if (number %2==0){
        cout<<"number is even ";
    }else{
        cout<<"number is odd";
    }
    return 0; 
}


/*check if a number is divisible by 5  */

#include<bits/stdc++.h>
using namespace std;

int main (){
    int number ;

    cout<<"enter the number : ";
    cin>>number ;


    if(number % 5 ==0 ){
        cout<<"number is divisible by 5";
    }else{
        cout<<"number is divisible by others number ";
    }
    return 0;
}

/*check if a number is divisible by both 3 and 5 . */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int number ;

    cout<<"enter the number ";
    cin>>number ;

    if(number % 3 ==0 && number % 5 ==0 ){
        cout<<"number is divisible by 3 and 5 ";
    }else {
        cout<<"number is divisible by others number ";
    }

    return 0; 
}

/*check if a given year is a leap year */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int year ;
    
    cout<<"enter the year  ";
    cin>>year ;

    if (year % 4 == 0 && year % 400 == 0 ){
        cout<<"this year is leap year ";
    }else {
        cout<<"this year is not leap year ";
    }
    return 0;
}

/*Take two numbers and print the larger one */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1 , n2;

    cin>> n1>>n2;

    if(n1>n2){
        cout<<"n1 is larger than n2.";
    }else {
        cout<<"n2 is larger than n1";
    }

    return 0;
}

/*take temperature value and print "cold " , "warm " , or "hot" using range conditions . */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int temperature;

    cin>>temperature;

    if(temperature < 0){
        cout<<"cold";
    }else if(temperature > 0 && temperature <= 32 ){
        cout<<"warm";
    }else{
        cout<<"hot ";
    }
    return 0;
}

/*Take a character and check if it's a vowel or consonant . */

#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
   
    cin>>ch;

    if(!isalpha(ch)){
        cout<<"this is not an alphabet character .";
    }
   else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
        cout<<"this is vowel charater .";
    }else{
        cout <<"this is consonant ";
    }

     return 0; 
}

/*Take a character and check whether it's uppercase , lowercase , a digit  or a special character */

#include<bits/stdc++.h>
using namespace std;

int main (){
    char ch;

    cout<<"enter the character ";
    cin>>ch;

     if(isupper(ch)){
        cout<<"this is upper case";
     }else if(islower(ch)){
        cout<<"this is lower case ";
     }else if (isdigit(ch)){
        cout<<"this is digit ";
     }else if( ispunct(ch)){
        cout<<"this is a special character  ";
     }else{
        cout<<"this is not a valid character ";
     }
    return 0; 
}