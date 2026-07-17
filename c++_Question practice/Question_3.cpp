//Print all the numbers between 1 and 50 except multiple of 3
# include<iostream>
using namespace std;

int main(){
    for (int i = 0; i <=50; i++)
    {
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}