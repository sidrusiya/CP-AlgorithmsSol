#include <iostream>
#include <ctime>

using namespace std;

int main() {
    const int MAXLEN = 80;
    char s[MAXLEN];
    time_t t = time(0);
    strftime(s, MAXLEN, "%Y-%m-%d", localtime(&t));
    std::cout << s << '\n';
}
