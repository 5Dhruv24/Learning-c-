//Program to find all the odd number between the given limit
# include<iostream>
using namespace std;

void odd(int lower,int upper){
    cout<<"All the odd number between "<<lower<<" and "<<upper<<" are:-"<<endl;
    for (int i = lower; i < upper; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<endl;
        }
        
    }
    
}

int main(){
    int l,u;
    cout<<"Enter lower limit:-",cin>>l,cout<<endl;
    cout<<"Enter upper limit:- ",cin>>u,cout<<endl;
    odd(l,u);
    
    return 0;
}