# include<iostream>
using namespace std;

int main(){
    
    //array
    int marks[5]={};
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enters marks:-",cin>>marks[i],cout<<endl;    
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Marks of student "<<i+1<<": "<<marks[i]<<endl;
    }
    

    return 0;
}