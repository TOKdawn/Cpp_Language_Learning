#include <iostream>

using namespace std;
/*
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
*/
int getAA1(){
    int a;
    a=10;
    return a;
}
int& getAA2(){
    int a;
    a=10;
    return a;
}
int main(){
    int a1=0;
    int a2=0;
    
    a1=getAA1();
    a2=getAA2();
    int &a3 = getAA2();
    cout<<a1<<"  "<<a2<<"  "<<a3<<endl;
}