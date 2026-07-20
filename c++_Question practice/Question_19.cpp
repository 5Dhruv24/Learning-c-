//binary to decimal number
# include<iostream>
using namespace std;

int main(){
    int r,n;
    int p=1;
    cout<<"Enter number:-",cin>>r,cout<<endl;
    for (int i = 0; r>0; i++)
    {
        n=(r%10)*p;
        r/=10;
        p*=2;
    }
    cout<<"The decimal value:-"<<n<<endl;
    

    return 0;
}