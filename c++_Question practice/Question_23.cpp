//to check if person is eligible to vote or not
# include<iostream>
using namespace std;

void eligible(int age){
    if(age>=18){
        cout<<"The person is eligible for vote."<<endl;
    }
    else{
        cout<<"The person is not eligible for vote."<<endl;
    }
    
}
int main(){
    int age;
    cout<<"Enter age:-",cin>>age,cout<<endl;
    eligible(age);
    return 0;
}