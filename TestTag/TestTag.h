#pragma once

#include <iostream>
#include <string>
using namespace std;

class TestTag {
public:
    TestTag(string name);

    ~TestTag();

private:
    string _name;
};