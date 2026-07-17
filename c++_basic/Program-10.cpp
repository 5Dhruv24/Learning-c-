# include<iostream>
using namespace std;


//Function prototype
int square(int);


int main(){
    int a;
    cout<<"Enter the number:-",cin>>a,cout<<endl;
    cout<<"The square of "<<a<<" is:-"<<square(a);
    return 0;
}

int square(int a){
    return a*a;
}