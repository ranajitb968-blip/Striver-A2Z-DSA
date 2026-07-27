/*

   #include<bits/stdc++.h>
   using namespace std;
   int main(){
    string m="ranajit";
    cout<<m.length()<<endl;
   }




#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[] = "ranajit bera";
    int len=0;

    for (int i = 0; i < str[i] != '\0'; i++)
    {
        len++;
    }
    cout<<str<<endl;
    cout<<strlen(str)<<endl;
    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str ="ranajit bera";
   str.push_back('!');
   cout << str << endl;
   str.pop_back();
   cout << str << endl;
   str.insert(12," is a good boy");
   cout<<str<<endl;
   str.erase(4 , 8);
    cout<<str<<endl;
    return 0;
}
