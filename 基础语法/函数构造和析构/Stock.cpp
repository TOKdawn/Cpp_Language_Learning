#include "Stock.h"
#include <iostream>
Stock::Stock() {
  std::strcpy(company, "no name");
  shares = 0;
  share_val = 0.0;
  total_val = 0.0;
} //默认构造函数实现
Stock::Stock(const char *co, int n, double pr) {
  std::strncpy(company, co, 29);
  company[29] = '\0';
  if (n < 0) {
    std::cerr << "Number of share can't be negative." << company
              << "shares set to 0\n";
    shares = 0;
  } else
    shares = n;
  share_val = pr;
  set_tot();
}
// Stock::~Stock(){}
void Stock::buy(int num, double price) {
  if (num < 0) {
    std::cerr << "错误\n";
  } else {
    shares += num;
    share_val = price;
    set_tot();
  }
}
void Stock::sell(int num, double price) {
  if (num < 0) {
    std::cerr << "错误\n";
  } else if (num > shares) {
    std::cerr << "错误\n";
  } else {
    shares -= num;
    share_val = price;
    set_tot();
  }
}
void Stock::update(double price) {
  share_val = price;
  set_tot();
}
void Stock::show() const {
  using std::cout;
  using std::endl;
  cout << "Company:" << company << "Shera:" << shares << endl
       << "Shera Price: $" << share_val << "Total Worth: $" << total_val
       << endl;
}
const Stock &Stock::topval(const Stock &s) const {
  if (s.total_val > total_val)
    return s;
  else
    return *this;
}
