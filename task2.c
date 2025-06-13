#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Спроба прочитати /etc/shadow за допомогою sudo...\n");
    system("sudo cat /etc/shadow");
    return 0;
}
