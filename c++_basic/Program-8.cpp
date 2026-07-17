# include<iostream>
using namespace std;

int main(){
    //pointers
    int a=12;
    cout<<"Address of a in memory is"<<&a<<endl;
    

    //pointers and arrays
    int marks[5]={30,12,65,45,78};
    int *p=marks;
    int t=0;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Marks of student "<<i+1<<": "<<*(p+i)<<endl;
        t=t+*(p+i);      //pointer arthmetics
            }
    cout<<"Total marks is:-"<<t<<endl;

    return 0;
}