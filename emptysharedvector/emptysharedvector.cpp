#include <vector>
#include <memory>
#include <iostream>
using namespace std;

int main() {
    std::vector<int> v = {1};
    std::shared_ptr<std::vector<int>> sv = std::make_shared<vector<int>>(v);
    if (sv) {
        for (auto i : *sv) {
            cout << "hello" << endl;
        }
    }

    return 0;
}
