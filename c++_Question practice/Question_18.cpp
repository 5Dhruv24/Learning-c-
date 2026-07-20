//plus pattern
# include<iostream>
using namespace std;

int main(){
    int r;
    for (int i = 0; i >=0; i++)
    {
        cout<<"Enter number:-",cin>>r,cout<<endl;
        if(r%2==0){
            cout<<"Enter any odd number."<<endl;
            continue;
        }
        else{
             //top pattern
    for (int i = 0; i < r/2; i++)
    {
        for (int j = 0; j < r/2; j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
        
    }

    //middle pattern
    for (int i = 0; i < r; i++)
    {
        cout<<"*";
    }
    cout<<endl;


    //lower pattern
    for (int i = 0; i < r/2; i++)
    {
        for (int j = 0; j < r/2; j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
        
    }
            break;
        }
    }
    
         
    
   
    
    
    return 0;
}