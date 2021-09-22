//Write a C++ program to compute cosine series i.e cos(x) = 1- (x^2)/2! + (x^4)/4! - (x^6)/6!+--------(x^n)/n! 

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x,t,sum;   
    int i,n=20;
    cout<<"\t\t  COMPUTE COSINE VALUE  \t\t"<<endl;
    cout<<"Input X: "<<endl;
    cin>>x;
    x=x*3.1412/180; //converting x into radians 
    t=t+1;
    sum =1 ; 
    for(i=1;i<=n;++i){
        t=t*pow((double)(-1),(double)(2*i-1))*x*x/(2*i*(2*i-1));     //method to compute 
        sum+=t;
    }
    cout<<"Cos(x) = "<<sum<<"\n";
    return 0;

}