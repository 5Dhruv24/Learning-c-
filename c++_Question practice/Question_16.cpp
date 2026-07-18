//sum of series 1-2+3....n
# include<iostream>
using namespace std;

int main(){
    int r;
    int sum=0;
    cout<<"Enter number:-",cin>>r,cout<<endl;
    for (int i = 1; i <=r; i++)
    {
        if(i%2==0){
            sum=sum-i;

        }
        else{
            sum=sum+i;
        }
    }
    cout<<"The sum:-"<<sum<<endl;
    
    return 0;
}