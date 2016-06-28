#include <iostream>

using namespace std;
struct Teacher{
    char name[64];
    int age;
};
void printT(Teacher &t1){
    cout<<t1.age<<endl;
    
}
int main(){
    Teacher t1;
    t1.age=10;
    printT(t1);
    return 0;
}

//引用其实就是一种语法糖
//引用是个常量 
//本质为常量指针
//Type &name  <--->  Type* const name
int main1(int argc, char *argv[]) {
    int a =10;
    int &b = a;//b就是a的别名
    a=11;//直接赋值
    cout<<a<<endl;
    b=12;
    cout<<a<<endl;
}