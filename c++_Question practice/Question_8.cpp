//Pyramid pattern
# include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter number of rows:-",cin>>r,cout<<endl;
    
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j <r-i ; j++)
        {
            cout<<" ";
        }
        for (int l = 0; l < 2*i-1; l++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
    
    return 0;
}