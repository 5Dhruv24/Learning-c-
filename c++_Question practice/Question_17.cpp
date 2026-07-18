//Alphabet diamond pattern
# include<iostream>
using namespace std;

int main(){
    int r;
    char c='A';
    cout<<"Enter number:-",cin>>r,cout<<endl;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <=r-i ; j++)
        {
            cout<<" ";
        }
        for (int l = 0; l < 2*i-1; l++)
        {
            cout<<(char)(c+l);
        }
        cout<<endl;
        
        
    }
    for (int i = r-1; i > 0; i--)
    {
        for (int j = 1; j <=r-i ; j++)
        {
            cout<<" ";
        }
        for (int l = 0; l < 2*i-1; l++)
        {
            cout<<(char)(c+l);
        }
        cout<<endl;
    }
    
    
    return 0;
}