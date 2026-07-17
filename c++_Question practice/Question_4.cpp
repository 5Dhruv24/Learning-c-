//rectangle pattern
# include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter number of rows:-",cin>>r,cout<<endl;
    cout<<"Enter number of columns:-",cin>>c,cout<<endl;
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}