//number pyramid
# include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter number of rows:-",cin>>r,cout<<endl;
    for (int i = 1; i <=r; i++)
    {
        for (int j = 0; j < r-i; j++)
        {
            cout<<" ";

        }
        for (int l = 1; l <= 2*i-1; l++)
        {
            cout<<l;

        }
        cout<<endl;
        
        
    }
    
    return 0;
}