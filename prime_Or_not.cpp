#include<iostream>
using namespace std;

class prime
{
    private:
    int c;
    public:
    void primeOrnot(int n)
    {
    int c=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;

            }

        }
        if(c==2)
        {
        cout<<n<<" is prime number";

        }
        else
        {
            cout<<n<<" is not prime number";
        }



    }

};

int main()
{
int n;
cout<<"Enter the no to find prime or not: ";
cin>>n;
prime o;
o.primeOrnot(n);


}
