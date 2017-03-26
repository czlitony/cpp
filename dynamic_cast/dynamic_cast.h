#include <iostream>
using namespace std;

class Base {
public:
    virtual void funcA() {
        cout << "Base::funcA" << endl;
    };

    void funcC() {
        cout << "Base::funcC" << endl;
    };
};

class Derived : public Base {
public:
        void funcA() override {
        cout << "Derived::funcA" <<endl;
    };
    void funcB() {
        cout << "Derived::funcB" <<endl;
    }
};