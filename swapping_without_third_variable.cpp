#include<iostream>
using namespace std;



class solution
{
public:
void swap_no(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;



}


};

int main()
{
int a,b;
cout<<"Enter the no 1: ";
cin>>a;
cout<<"Enter the no 2: ";
cin>>b;
cout<<"Value of a before swapping : "<<a<<endl;
cout<<"Value of b before swapping : "<<b<<endl;
solution o;
o.swap_no(&a,&b);
cout<<"Value of a after swapping : "<<a<<endl;
cout<<"Value of b after swapping : "<<b<<endl;

}
