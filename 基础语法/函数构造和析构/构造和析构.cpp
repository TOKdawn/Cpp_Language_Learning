#include <iostream>
class Father1 {
private:
  int f1num;

public:
  char f1name[10];
  Father1(const char *n = "father2", int num = 1);
  ~Father1() { std::cout << "bey Father" << f1num << std::endl; };
  void Say() { std::cout << "i am" << f1name << std::endl; };
};
Father1::Father1(const char *name, int num) {
  std::strncpy(f1name, name, 8);
  f1num = num;
}
class Father2 {
private:
  int f2num;

public:
  char f2name[10];
  Father2(const char *name = "father2", int num = 2);
  ~Father2() { std::cout << "bey Father" << f2num << std::endl; };
  void Say() { std::cout << "i am" << f2name << std::endl; };
};
Father2::Father2(const char *name, int num) {
  std::strncpy(f2name, name, 8);
  f2num = num;
}

int main(int argc, char *argv[]) {
  using namespace std;
  Father1 F1;
  Father2 F2;
  F1.Say();
  F2.Say();
  Father1 F3("xxxxx", 3);
  Father2 F4("ccccc", 4);
  F3.Say();
  F4.Say();
}
