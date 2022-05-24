#include<iostream>
using namespace std;
int addition(int num1,int num2,int num3){
    int ans=num1+num2+num3;
    return ans;
}
int subtraction(int num1,int num2,int num3){
    int ans=num1-num2-num3;
    return ans;
}
int multiplication(int num1,int num2,int num3){
    int ans=num1*num2*num3;
    return ans;
}
int addition(int num1,int num2){
    int ans=num1+num2;
    return ans;
}
int subtraction(int num1,int num2){
    int ans=num1-num2;
    return ans;
}
int division(int num1,int num2){
    int ans=num1/num2;
    return ans;
}
int main(){
    int a,b,n,i,c;
    cout<<"Enter the num1;"<<endl;
    cin>>a;
    cout<<"Enter the num2;"<<endl;
    cin>>b;
    cout<<"Enter the num3;"<<endl;
    cin>>c;
    cout<<"enter the value of n=1 for addition"<<endl;
    cout<<"enter the value of n=2 for subtraction"<<endl;
    cout<<"enter the value of n=3 for multiplication"<<endl;
    cout<<"enter the value of n=4 for division"<<endl;
    cin>>n;

    switch(n){
        case 1:  i=addition(a,b);
                cout<<i<<endl;
                break;
        case 2:  i=subtraction(a,b);
                cout<<i<<endl;
                break;
        case 3:  i=division(a,b);
                cout<<i<<endl;
                break;
                }
                
    switch(n){
        case 1:  i=addition(a,b,c);
                cout<<i<<endl;
                break;
        case 2:  i=subtraction(a,b,c);
                cout<<i<<endl;
                break;
        case 3:  i=division(a,b,c);
                cout<<i<<endl;
                break;
                }

}