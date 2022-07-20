#include <iostream>

using namespace std;

int main()
{
    //variable declaration :
    /*int num1,num2,gcd;
    cout<<"\nFind the greatest common divisor of two numbers:\n";
    cout<<"\n------------------------------------------------\n";
    cout<<"input the first number: ";cin>>num1;
    cout<<"input the second number: ";cin>>num2;
    for(int i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0&&num2%i==0){
            gcd=i;

        }
    }
   cout<<"The greatest common divisor is: "<<gcd<<endl;
   */
   //(1)+(1+2)+(1+2+3)........:
   //declaration of the variables:
    int i,j,n,sum=0,tsum;
    cout<<"\n\nFind the sum of series (1)+(1+2)+(1+2+3)........ :";
    cout<<"\n---------------------------------------------------\n";
    cout<<"\n input the nth term :";
    cin>>n;
    for(i=1;i<=n;i++){
        tsum=0;
        for(j=1;j<=i;j++){
            sum+=j;
            tsum+=j;
            cout<<j;
            if(j<i){
                cout<<"+";
            }
        }
        cout<<"="<<tsum<<endl;
    }
    cout<<"tHE SUM OF THE ABOVE SERIES IS :"<<sum<<endl;
   return 0;
}

