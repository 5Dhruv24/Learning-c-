# include<iostream>
using namespace std;

//inline function
inline int product(int a,int b){
    return a*b;
}

//static variable
int counting(int a){
    static int c=0;
    a=a-c;
    c=c+1;
    cout<<c<<endl;
    return a;
}
int main(){
    int x,y;
    cout<<"Enter the value of x and y:- ";
    cin>>x>>y;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<product(x,y)<<endl;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<product(x,y)<<endl;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<product(x,y)<<endl;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<product(x,y)<<endl;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<product(x,y)<<endl;
    cout<<counting(x)<<endl;
    cout<<counting(x)<<endl;
    cout<<counting(x)<<endl;
    cout<<counting(x)<<endl;
    cout<<counting(x)<<endl;
    return 0;
}