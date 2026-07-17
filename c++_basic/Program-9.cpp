# include<iostream>
using namespace std;

struct room{
    int room_no;
    string owner_name;
    int rent;
};

union  cabinet{
    int room_no;
    char owner_name[20];    
    int rent;
};

int main(){
    //Structures
    room r1;
        cout<<"Enter room no:- ";
        cin>>r1.room_no;
        cout<<"Enter owner name:- ";
        cin>>r1.owner_name;
        cout<<"Enter rent:- ";
        cin>>r1.rent;
        cout<<"Room Details:-"<<endl;
        cout<<"Room No:-"<<r1.room_no<<endl;
        cout<<"Owner name:-"<<r1.owner_name<<endl;
        cout<<"Rent:-"<<r1.rent<<endl;

    //Union
    cabinet e1;
    cout<<"Enter room no:- ";       
    cin>>e1.room_no;
    cout<<"Room Details:-"<<endl;
    cout<<"Room No:-"<<e1.room_no<<endl;
    
    return 0;


}