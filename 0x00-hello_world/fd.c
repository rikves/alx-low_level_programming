#include <unistd.h>

int main() {
    write(1, "The result is: 42\n", 18);
    return 0;
}

