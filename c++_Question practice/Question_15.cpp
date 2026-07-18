//reverse the nummber
# include<iostream>
# include<cmath>
using namespace std;

int main(){
   int n,l;
   int r=0;
   cout<<"Enter number:-",cin>>n,cout<<endl;
   while(n>0){
    l=n%10;
    r=r*10+l;
    n/=10;
   }
   cout<<"Reversed number is:-"<<r<<endl;
    
    
    return 0;
}