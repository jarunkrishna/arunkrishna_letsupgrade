/* Wap to. Reverse digit of a number

Ex 12345

Ans. 54321 */


#include<iostream>

using namespace std;

class reverseno
{
private:
int sum; int rem;

    public:
    reverseno()
    {
    sum=0;

    }

    int revno(int n)
    {
    while(n>0){


     if(n>=10)
     {
        rem = n%10;
     }

     else
     {
        rem =n;
     }
     n=n/10;
     sum=sum*10+rem;
}
return sum;
    }


};

int main()
{
int n;
cout<<"Enter the no: ";
cin>>n;
reverseno o;
cout<<o.revno(n);
cout<<endl;
}
