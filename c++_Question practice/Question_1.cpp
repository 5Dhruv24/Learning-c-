//To print the sum of n number of integer where n is input?
# include<iostream>
using namespace std;

int main(){
    int n,sum;
    sum=0;
    cout<<"Enter the value of n:-",cin>>n,cout<<endl;
    for (int i = 0; i < n+1; i++)
    {
        sum=sum+i;
        
    }
    cout<<"The sum upto n is :- "<<sum<<endl;
    return 0;
}