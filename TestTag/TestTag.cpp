#include "TestTag.h"
using namespace std;

TestTag::TestTag(string name) : _name(name) {
    cout << "***************" << name << " begin***************" << endl;
};

TestTag::~TestTag() {
    cout << "***************" << _name << " end*****************" << endl << endl;        
}