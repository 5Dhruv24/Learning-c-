//Hollow rectangle pattern
# include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter number of rows:-",cin>>r,cout<<endl;
    cout<<"Enter number of columns:-",cin>>c,cout<<endl;
    for (int i = 0; i < r; i++)
    {
        if(i==0 or i==r-1 ){
            for (int j = 0; j < c; j++)
            {
                cout<<"*";
            }
            cout<<endl;
            
        }
    
        else{
            for (int j = 0; j < c; j++)
            {
                if(j==0 or j==c-1){
                    cout<<"*";
                    if (j==c-1){
                        cout<<endl;
                    }
                
                    
                }
                else{
                    cout<<" ";
                }
            }
            
        }
    }
    
    return 0;
}