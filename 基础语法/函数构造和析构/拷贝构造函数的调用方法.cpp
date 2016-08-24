#include <iostream>

using namespace std;
class AA{
public:
    int a;
    AA(){
        cout<<"构造函数"<<endl;
    }
    ~AA(){
        cout<<"析构函数"<<endl;
    }
    AA(const AA &obj){
        cout<<"我也是构造函数,我是通过另外一个对象obj2来初始化"<<endl;
        a=obj.a;
    }
    void getA(){
        cout<<a;
    }
protected:
private:
};
void ObjPaly(){
    AA a1;//变量定义
    //赋值构造函数的第一个应用场景 
    cout<<"ccccc";
    AA a2=a1;//定义变量并且初始化,利用拷贝构造函数
    a2=a1;//编译器自己提供的浅copy
} 
void ObjPaly02(){
    AA a1;//变量定义
    //赋值构造函数的第一个应用场景 
    AA a2(a1);//定义变量并且初始化,利用拷贝构造函数
    a2.getA();
    a2=a1;//编译器自己提供的浅copy
}
int main(int argc, char *argv[]) {
    ObjPaly();
    ObjPaly02();
}