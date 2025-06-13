#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Користувач (whoami):\n");
    system("whoami");

    printf("Інформація про користувача (id):\n");
    system("id");

    return 0;
}
