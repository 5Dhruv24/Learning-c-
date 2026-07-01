# include<iostream>
# include<iomanip>
using namespace std;



int main(){
    int a=112,b=23;
    float c=13.53;
    cout<<setw(6)<<a<<endl<<setw(6)<<b<<endl<<setw(6)<<c<<endl;
    cout<<"sum 1:-"<<a+b+c<<endl;
    cout<<"sum 2:-"<<a+b+int(c); 
    //cout<<"local a is:-"<<a<<endl;
    //ut<<"global a is:-"<<::a;
    //a=100;
    //cout<<"local a is:-"<<a<<endl;

    return(0);
}