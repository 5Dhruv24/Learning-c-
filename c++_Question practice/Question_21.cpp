// Program to print square of furst 5 natural number
# include<iostream>
# include<cmath>
using namespace std;

void square(int n){
    for (int i = 1; i <= n; i++)
    {
        cout<<pow(i,2)<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter numbers:-",cin>>n,cout<<endl;
    cout<<"Square of first "<< n <<" natural numbers are:-"<<endl;
    square(n);
    return 0;
}