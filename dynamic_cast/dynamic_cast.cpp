#include <iostream>
#include <memory>
#include "dynamic_cast.h"
#include "../TestTag/TestTag.cpp"
using namespace std;

void test() {
    TestTag t(__func__);
    shared_ptr<Base> b = make_shared<Base>();
    shared_ptr<Derived> d = static_pointer_cast<Derived>(b);
    d->funcA();
    d->funcB();
}

void test1() {
    TestTag t(__func__);
    shared_ptr<Base> b = make_shared<Derived>();
    shared_ptr<Derived> d = dynamic_pointer_cast<Derived>(b);
    d->funcA();
    d->funcB();
    d->funcC();
}

void test2() {
    TestTag t(__func__);
    shared_ptr<Derived> d = make_shared<Derived>();
    shared_ptr<Base> b = dynamic_pointer_cast<Base>(d);
    b->funcA();
    // b->funcB();
}

int main() {
    test();
    test1();
    test2();

    int i;
    // cin >> i;
    return 0;
}