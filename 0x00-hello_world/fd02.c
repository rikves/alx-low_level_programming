#include <unistd.h>

int main() {
    write(2, "Error: Something went wrong!\n", 30);
    return 1;
}

