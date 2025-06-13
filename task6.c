#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Домашній каталог:\n");
    system("ls -l $HOME");

    printf("\n/usr/bin:\n");
    system("ls -l /usr/bin | head -n 10");

    printf("\n/etc:\n");
    system("ls -l /etc | head -n 10");

    printf("\nСпроба прочитати файл у /etc:\n");
    system("cat /etc/hostname");

    printf("\nСпроба записати у файл у /etc (має провалитися):\n");
    system("echo 'test' > /etc/test.txt");

    return 0;
}
