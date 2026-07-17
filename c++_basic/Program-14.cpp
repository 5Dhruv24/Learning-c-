# include<iostream>
using namespace std;

//recursion function
int fact(int a){
    if(a<=1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}

int main(){
    int a;
    cout<<"Enter the value of a:-",cin>>a;
    cout<<"Factorial of "<<a<<" is "<<fact(a);
    return 0;
}