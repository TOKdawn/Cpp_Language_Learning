#include <iostream>
using namespace std;
class Test02{
public:
    Test02(){
        cout<<"构造函数"<<endl;
    }
    ~Test02(){
        cout<<"析构函数"<<endl;
    }
protected:
private:
    int a;
};
void ObjPlay(){
    Test02 t1;
    cout<<"展示T1的生命周期"<<endl;
}

int main(int argc, char *argv[]) {
    ObjPlay();
    //system("pause");
}