#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    string message = "Hello, World!";

    for (char c : message) {
        cout << c;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // ??i 100 milliseconds (0.1 giây)
    }

    return 0;
}
