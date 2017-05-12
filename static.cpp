#include <iostream>
using namespace std;
class Text{
 public:
    int readA(){
        cout<<a<<endl;
        return 0;
    }
    int readB(){
        cout<<b<<endl;
        return 0; 
    }
    void chinge(int _a,int _b){
        a=_a;
        b=_b;
    }
 private:
    int a;
    static int b;
 protected:
};
int Text::b=10; 
int main(int argc, char *argv[]) {
    Text one,two;
    two.chinge(3, 4);
    cout<<one.readA()<<"  ="<<one.readB()<<endl;    
    cout<<two.readA()<<"  "<<two.readB()<<endl;
    return 0;
}