#include <iostream>
using namespace std;

main()
{
    int num,d,count=1,num1;;

    cout<<"input number"<<endl;
    cin>>num;

    num1=num;
    d=num/10;
    while (d!=0)
    {
        count++;
        d=d;
        d=d/10;
    }
    
    int mul=1,r,div,result=0;
int cnt=count;

while (num!=0)
{
    r=num%10;
    while (cnt!=0)
        {
            mul*=r;;
            cnt--;
        }

        result+=mul;
        num=num/10;
        cnt=count;
        mul=1;
}
    cout<<result<<endl;
    if(result==num1)    
        cout<<"armstrong number";
    else
        cout<<"not armstrong number";

    return 0;
}