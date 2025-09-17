#include <iostream>
#include <string>
#include <vector>
using namespace std;
    
class car {
public:
    string brand;
    string model;
    car(string b, string m) : brand(b), model(m) {}
};

int main() {
    car car1("BMW", "X5");
    car car2("Ford", "Mustang");
    cout << car1.brand << " " << car1.model << "\n";
    cout << car2.brand << " " << car2.model << "\n";
    return 0;
}
    