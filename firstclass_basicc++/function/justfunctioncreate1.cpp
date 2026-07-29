// Return_type function_name(parameters list)
// {

//     // body of function
//     return value;
// }

// addition of two number
#include <iostream>
using namespace std;
void addition(int a, int b)
{
    int sum = a + b;
    cout << "sum is " << sum << endl;
}
int main()
{
    // function calling
    addition(4, 6);
    addition(5, 6);
    return 0;
}

// addition of two number
#include <iostream>
using namespace std;

void addition(int, int);
// if main function is written before the other (addition ()) declear koro tokhon datatype return type parameter declar korta hoba 30 line ar moto. ai line na write korla error daba .
int main()
{
    // function calling
    addition(4, 6);
    addition(5, 6);
    return 0;
}
void addition(int a, int b)
{
    int sum = a + b;
    cout << "sum is " << sum << endl;
}