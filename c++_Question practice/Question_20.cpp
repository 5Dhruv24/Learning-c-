//decimal to binary number
# include<iostream>
using namespace std;

int main(){
    int r;
    int n=0;
    int i=1;
    cout<<"Enter number:-",cin>>r,cout<<endl;
    
    while (r>0)
    {
        int last=r%2;
        
        n+=last*i;
        
        i*=10;
        r/=2;

    }
    cout<<"The binary number:-"<<n<<endl;
    
    return 0;
}