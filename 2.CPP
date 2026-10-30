#include <iostream>
using namespace std;

class converter {
public:
    void convert() {
        int h, m, s, total;

        cout << "Enter hours: ";
        cin >> h;

        cout << "Enter minutes: ";
        cin >> m;

        cout << "Enter seconds: ";
        cin >> s;

        total = h * 3600 + m * 60 + s;

        cout << "Total seconds: " << total;
    }
};

int main() {
    converter t;
    t.convert();

    return 0;
}

