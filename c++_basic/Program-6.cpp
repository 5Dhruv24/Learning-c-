# include<iostream>
using namespace std;

int main(){
    int i;
    int* b=&i;
    for (int i = 0; i < 30; i++)
    {
        if(i==26){
        break;
        }
        else if (i==15)
        {
        continue;
        /* code */
        }
        cout<<i<<endl;
        
        cout<<"address is:-"<<b;
     
    
    }
    
    return 0;
}