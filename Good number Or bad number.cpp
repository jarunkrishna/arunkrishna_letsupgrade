/* Given an integer M perform the following conditional actions:

- If M is multiple of 3 and 5 then print "Good Number" (without quotes).

- If M is only multiple of 3 and not of 5 then print "Bad Number" (without quotes).

- If M is only multiple of 5 and not of 3 then print "Poor Number" (without quotes).

- If M doesn't satisfy any of the above conditions then print "-1" (without quotes).  */


#include<iostream>
using namespace std;

class goodnumber
{
public:
    void goodOrBad(int m)
    {
        if(m%3==0 && m%5 ==0)
        {
            cout<<"Good Number";
        }
        else if(m%3==0 && m%5 !=0)
        {
            cout<<"Bad Number";
        }
        else if(m%3!=0 && m%5 ==0)
        {
            cout<<"Poor Number";
        }
        else
        {
            cout<<-1;
        }



    }

};

int main()
{
    int m;
    cout<<"Enter the number: ";
    cin>>m;
    goodnumber o;
    o.goodOrBad(m);


}
