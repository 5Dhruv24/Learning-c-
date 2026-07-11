# include<iostream>
using namespace std;

class items{
    int id;
    
    static int count;
    public:
        void inp(){
            cout<<"Enter the item id:-",cin>>id,cout<<endl;
            
                
            
            
            count++;
            cout<<"Item added."<<endl;
            
        }

        void counter(){
            cout<<"Total number of items are:-"<<count<<endl;
            
        }


};

int items::count=0;


int main(){
    
    items iot[5];
    items s;
    for (size_t i = 0; i < 5; i++)
    {
        
        
        s.inp();
        

        /* code */
    }
    s.counter();
    
    
    return 0;
}