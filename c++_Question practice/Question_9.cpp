//Number rectangle
# include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter size of side:-",cin>>r,cout<<endl;
    for (int i = 1; i <=r ; i++)
    {
        for (int j = i; j<=r; j++)
        {
            cout<<j;
            
        }
        for (int l = 1; l<i; l++)
        {
            cout<<l;
        }
        
        cout<<endl;
        
    }
    
    return 0;
}