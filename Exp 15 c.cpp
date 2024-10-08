//sneha diwan
//entc B2
//23070123126
//experiment 15
//sneha diwan
//entc B2
//23070123126
//experiment 15
#include <iostream>
using namespace std;

void print_rev(int i)
{
    if (i > 0)
    {
        cout << (i % 10);
        print_rev(i / 10);//recursion
    }
}

int main()
{
    int i;
    cout << "Enter a Number: ";
    cin >> i;
    print_rev(i); // Function calling
    return 0;
}
/*
Enter a Number: 123
321

=== Code Execution Successful ===


*/
