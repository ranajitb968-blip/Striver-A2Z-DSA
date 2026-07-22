/*
squar problem solve div 4 1061 code force

#include <bits/stdc++.h>
    using namespace std;
int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == b && b == c && c == d && d == a)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

Q) khba is writing his girlfriend's name. He has n
 cubes, each with one lowercase Latin letter written on it. They are arranged in a row, forming a string s
. His girlfriend's name is also a string t
, consisting of n
 lowercase Latin letters.

To prove his love, he must check whether it is possible to rearrange the letters of string s
 so that it becomes her name t
.Input
The first line contains an integer q
 (1≤q≤1000
) — the number of test cases.

The first line of each test case contains an integer n
 (1≤n≤20
).

The second line of each test case contains two distinct strings s
 and t
, each consisting of n
 lowercase Latin letters.

Output
For each test case, output "YES" if the letters of s
 can be arranged to form t
; otherwise, output "NO".

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as positive responses.

Example
InputCopy
5
7
humitsa mitsuha
4
orhi hori
6
aakima makima
6
nezuqo nezuko
6
misaka mikasa
OutputCopy
YES
YES
NO
NO
YES
Note
In the first example, the initial string is "humitsa", and the following operations can be performed:

swap the first and third characters, resulting in "muhitsa" swap the second and fourth characters, resulting in "mihutsa" swap the third and fifth characters, resulting in "mithusa" swap the fourth and sixth characters, resulting in "mitsuha" In the second example, the initial string is "orhi", and the following operations can be performed :

    swap the second and third characters,
    resulting in "ohri" swap the first and second characters, resulting in "hori"

#include <bits/stdc++.h>
    using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

q)The little boy Nikita was given some cubes as a present. He decided to build a tower out of them.

Initially, the tower doesn't have any cubes. In one move, Nikita either puts exactly 1
 cube on top of the tower or removes exactly 1
 cube from the top of the tower. Is it possible that after n
 moves, the resulting tower has exactly m
 cubes?

Input
Each test contains multiple test cases. The first line of input contains a single integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The only line of each test case contains two integers n
 and m
 (1≤n,m≤100
).

Output
For each test case, output "Yes" (without quotes) if Nikita can obtain a tower with m
 cubes, and "No" (without quotes) otherwise.

You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.

Example
InputCopy
3
3 3
2 4
5 3
OutputCopy
Yes
No
Yes
Note
In the first test case, Nikita can put 1
 cube on top of the tower 3
 times in a row, so the answer is "Yes".

In the second test case, Nikita can only end up with either a tower with no blocks or a tower with 2
 blocks, so the answer is "No".

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (m > n)
        {
            cout << "No" << endl;
        }
        else if ((n - m) % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}



    
q)Farmer John has an integer x
. He creates a sequence of length n
 by alternating integers x
 and −x
, starting with x
.

For example, if n=5
, the sequence looks like: x,−x,x,−x,x
.

He asks you to find the sum of all integers in the sequence.

Input
The first line contains an integer t
 (1≤t≤100
)  — the number of test cases.

The only line of input for each test case is two integers x
 and n
 (1≤x,n≤10
).

Output
For each test case, output the sum of all integers in the sequence.

Example
InputCopy
4
1 4
2 5
3 6
4 7
OutputCopy
0
2
0
4



#include<bits/stdc++.h>
using namespace std;
int main(){

  int t;
  cin>>t;
  while(t--){
  int x;
  int n;
  cin>>x;
  cin>>n;

  if(n%2==0){
    cout<<0<<endl;
  }else{
    cout<<x<<endl;
  }

  }
    return 0;
}

*/