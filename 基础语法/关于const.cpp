#include <stdio.h>
// c++里面，const不在是一个冒牌货
int main() {
  // c里面的const是一个冒牌货
  const int a = 10;
  // a = 11; 直接修改a不可以

  int *p = (int *)&a;
  *p = 11; //但是间接修改a可以,在C里面
  printf("a: %d \n", a);

  //*p是10 。。。。说明p和&a绑定的很死。。。
  //*p是11.。。。。说明*p所指的内存空间和&a,不一样。。。
  printf("*p :%d\n", *p);
  printf("a=%d\n", a);
  printf("&a: %d \n", &a);
  printf("p: %d \n", p);
  system("pause");
}
/*
运行结果
a: 10
*p :11
a=10
&a: 1393838380
p: 1393838380
C++的const是维护了一个符号表.&地址与extern均与符号表没关系.

C++编译器会在这个时候为程序另外分配一块内存地址,保存这个数据.而不会去打乱原来的符号表.实现了真正的常量.

符号表是在编译阶段建立好的.
*/
