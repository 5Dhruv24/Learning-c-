# include<iostream>
using namespace std;


//class
class animal{
    
        
    public:
        string names[3];
        int ages[3];
        int quantity=3;
        string name;
        int age;
        void name_of_animal(void);
        void age_of_animal(void);
        
};

void animal::name_of_animal(void){
    cout<<"Enter the name of Animal:-",cin>>name,cout<<endl;
    
}
void animal::age_of_animal(void){
    name_of_animal();  //nesting of function
    cout<<"Enter the age of animal:-",cin>>age,cout<<endl;}
    





int main(){
    animal a1;

    for(int i=0;i<a1.quantity;i++){
        
        a1.age_of_animal();
        a1.names[i]=a1.name;
        a1.ages[i]=a1.age;
        
    }
    for(int i=0;i<a1.quantity;i++){
        cout<<"Name of animal "<<i+1<<" :-"<<a1.names[i]<<endl;
        cout<<"The age of animal "<<i+1<<" :-"<<a1.ages[i]<<endl;
    }

    return 0;
}