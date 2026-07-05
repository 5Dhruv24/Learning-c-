# include<iostream>
using namespace std;


//Function Overloading
int product(int a,int b){
    return a*b;
}

int product(int a,int b ,int c){
    return a*b*c;
}


int main(){
    int a,b,c;
    cout<<"Enter the value of a:-",cin>>a,cout<<endl;
    cout<<"Enter the value of b:-",cin>>b,cout<<endl;
    cout<<"Enter the value of c:-",cin>>c,cout<<endl;
    cout<<"Product of a and b is:-"<<product(a,b)<<endl;
    cout<<"Product of a,b and c is:-"<<product(a,b,c)<<endl;
    return 0;
}