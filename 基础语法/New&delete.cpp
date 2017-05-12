#include <iostream>
//new 
using namespace std;
class Test{
public:
    Test(int mya,int myb){
        a = mya;
        b = myb;
    }
    ~Test(){
        cout<<"析构函数"<<endl;
    }
    int getA(){
        return a;
    }
protected:
    
private:
    int a;
    int b;
    
};
int main(int argc, char *argv[]) {
    int *p2 = new int[10];
    p2[0] = 1;
    p2[1] = 2;
    delete [] p2;//新建并且释放变量
    Test *p = new Test(1,2);//自动调用构造函数
    cout<<p->getA()<<endl;
    delete p;//自动调用析构函数
    //基础类型new和malloc可以混搭
    //而对于对象malloc和free则不会调用类的构造和析构函数
    
}