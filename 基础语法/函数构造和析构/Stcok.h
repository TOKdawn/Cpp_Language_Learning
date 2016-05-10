#ifndef STCOK_H_
#define STCOK_H_

class Stock {
private:
  char company[30];
  int shares;
  double share_val;
  double total_val;
  void set_tot() { total_val = shares * share_val; } //可以直接在类声明里写实现

public:
  Stock(); //默认构造函数?
  Stock(const char *co, int n = 0, double pr = 0.0);
  //构造函数没有返回值?,并且要于类名相同
  ~Stock() {} //析构函数
  void buy(int num, double price);
  void sell(int num, double price);
  void update(double price);
  void show() const; // this指针
  const Stock &topval(const Stock &s) const;
};
#endif
