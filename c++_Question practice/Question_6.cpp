//triangle pattern
# include<iostream>
using namespace std;

int main(){
    int l;
    cout<<"Enter length:-",cin>>l,cout<<endl;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}