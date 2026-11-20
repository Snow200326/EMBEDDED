#include <stdio.h>
#include <stdbool.h>

volatile bool flag = false;

int main() {
    printf("Waiting for flag...\n");

    // start another thread or simulate flag change
    for (int i = 0; i < 100000000; i++) {
        if (i == 99999999) {
            flag = true;   // simulate hardware event
        }
    }

    while (!flag) {
        // waiting until flag becomes true
    }

    printf("Flag changed! Program done.\n");
    return 0;
}
