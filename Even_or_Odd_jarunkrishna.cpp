#include<iostream>
using namespace std;
class oddoreven
{

public:
    void findEvenOrOdd(int n)
    {
        if(n%2==0)
        {
           cout<<n<<" is even"<<endl;
        }
        else
        {
            cout<<n<<" is odd"<<endl;
        }
    }


};

int main()
{
int n;
cout<<"Enter the no to find Even or Odd: "<<endl;
cin>>n;
oddoreven o;
o.findEvenOrOdd(n);
return 0;



}
