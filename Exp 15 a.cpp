//sneha diwan
//entc B2
//23070123126
//experiment 15
#include<iostream>
using namespace std;
//create function 
int add(int n)
{
    if(n<=1)//base condition
    {
        return 1;
}else
{
    return (n+add(n-1));//recursion
}
}
int main()
{
    int x,n;
    cout<<"enter a number: ";
    cin>>n;
    x = add (n);//function calling
    cout<<n<<"+ = "<<x;
    return 0;
}
/*
enter a number: 8
8+ = 36

=== Code Execution Successful ===


*/
