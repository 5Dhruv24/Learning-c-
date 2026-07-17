//alternate number rectangle pattern
# include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter length of sides:-",cin>>r,cout<<endl;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <=r ; j++)
        {
            if(j%2==0){
                cout<<"2";
            }
            else{
                cout<<"1";
            }
        }
        cout<<endl;
        
    }
    
    return 0;
}