# include<iostream>
using namespace std;

//default argument
int product(int a,int b=1){
    return a*b;
}

//consant argument
int pro0duct(int a,const int b=10){
    return a*b;
}

int main(){
    int x,y;
    cout<<"Enter the value of x and y:- ";
    cin>>x>>y;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<product(x,y)<<endl;
    cout<<"The product of "<<x<<" and 1 is "<<product(x)<<endl;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<pro0duct(x,y)<<endl;
    cout<<"The product of "<<x<<" and 1 is "<<pro0duct(x)<<endl;
    return 0;
}