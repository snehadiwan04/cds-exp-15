//sneha diwan
//entc B2
//23070123126
//experiment 15
#include<iostream>
using namespace std;
//create function 
int fact(int n)
{
    if(n<=1)
    {
        return 1;
}else
{
    return (n*fact(n-1));
}
}
int main()
{
    int x,n;
    cout<<"enter a number: ";
    cin>>n;
    x = fact(n);
    cout<<n<<"! = "<<x;
    return 0;
}
/*
enter a number: 5
5! = 120

=== Code Execution Successful ===


*/
