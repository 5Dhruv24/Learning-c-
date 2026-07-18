//hollow number pyramid

# include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter number of rows:-",cin>>r,cout<<endl;
    for (int i = 1; i <=r; i++)
    {
        for (int l= 0; l < r-i; l++)
        {
            cout<<" ";

        }
        
    
        for (int j = 1; j <=2*i-1 ; j++){
            if(i==r){
                cout<<i;
            }
            else if(j==1||j==2*i-1){
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