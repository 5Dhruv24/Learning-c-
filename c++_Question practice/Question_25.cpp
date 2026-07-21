//Program to find all the prime number between the given limit
# include<iostream>
using namespace std;

bool prime(int i){
    
    
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j==0)
        {
            return false;
        }
        }
        return true;
        
    
    
}

int main(){
    int l,u;
    cout<<"Enter lower limit:-",cin>>l,cout<<endl;
    cout<<"Enter upper limit:- ",cin>>u,cout<<endl;
    cout<<"All the odd number between "<<l<<" and "<<u<<" are:-"<<endl;
    for (int i = l; i < u; i++)
    {
        if (prime(i))
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}