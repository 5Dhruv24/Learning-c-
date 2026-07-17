//PRINT THE FIRST MULTIPLE OF 5 THAT IS ALSO MULTIPLE OF 7
# include<iostream>
using namespace std;

int main(){
    int i=1;
    while (i>=0)
    {
        if (i%5==0 && i%7==0){
            cout<<"The first common multiple of 5 and 7 is "<<i<<" ."<<endl;
            break;
        } 
        i++; 
    }
    
    return 0;
}