//92 _ Overloading C++ Function Call Operator ( )

#include <iostream>
using namespace std;
class Marks{
    int mark;
public:
    Marks(int mark){
        this->mark=mark;
        cout<<"Constructor is called"<<endl;
    }
    void disp(){
        cout<<"Ur mark is: "<<mark<<endl;
    }
    //Overloaded FTN.CALL operator ftn //Must be NON-STATIC , NON-FRIEND ftn
    Marks operator()(int mk){
        mark=mk;
        cout<<"\nOperator ftn is called"<<endl;
        return *this;
    }
};

int main(){
    Marks rs(100);    //Constructor is called
    rs.disp();
    rs(500);    //Operator ftn is called
    rs.disp();
    return 0;
}
