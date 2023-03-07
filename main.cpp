#include <iostream>
using namespace std;

class A {
public:
  A() { cout << "A constructor called." << endl; }
};

class B : public A {
public:
  B() { cout << "B construcotr called." << endl; }
};

class C : public B {
public:
  C() { cout << "C constructor called." << endl; }
};

int main() {
  C c;
  return 0;
}