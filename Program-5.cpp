# include<iostream>
using namespace std;

int main(){
    int limit,a=0;
    int i;
    cout<<"Enter value of i:-",cin>>i;
    cout<<"Enter limit:-",cin>>limit;
    if(i==1){
        int j=0;
        while(a<=limit){
            cout<<j<<endl;
            j=j+a;
            a++;
        }
    }
     //for table of 6
    else if(i==2){for(int a=0;a<=limit;a++){
        cout<<6*a<<endl;
        
    }}
    else{
        cout<<"Nothing to perform.";
    }
    return 0;
}