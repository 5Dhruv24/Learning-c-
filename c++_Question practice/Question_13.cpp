//count number of digit of a given number
# include<iostream>
using namespace std;

int main(){
     int r;
     int d=1;
    cout<<"Enter number:-",cin>>r,cout<<endl;
    for (int i = 0; i <=50; i++)
    {
        if(r/10!=0){
            d=d+1;
            r/=10;
            
        }
        else{
            cout<<"The number of digits:-"<<d<<endl;
            break;
        }
    }
    
    return 0;
}