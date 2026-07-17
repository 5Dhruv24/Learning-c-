//hollow number pyramid
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
            if (i==r)
            {
                cout<<r;
            }
            cout<<" ";
            
            

        }
        for (int l = 1; l <= 2*i-1; l++)
        {
            if (i==r)
            {
                break;
            }
            if(l==i or l==2*i-1 ){
                cout<<i;
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
        
        
    }
    
    return 0;
}