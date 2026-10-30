#include <iostream>
using namespace std;

class converter {
public:
    void convert() {
        int h, m, s, total;

        cout << "Enter total seconds: ";
        cin >> total;

        h = total / 3600;
        m = (total % 3600) / 60;
        s = total % 60;

        cout << "HH:MM:SS => " << h << ":" << m << ":" << s;
    }
};

int main() {
    converter t;
    t.convert();

    return 0;
}
