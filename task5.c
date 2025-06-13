#include <stdio.h>
#include <stdlib.h>

int main() {
    system("echo 'temp data' > /tmp/temp_file.txt");

    // Зміна власника і прав (як root)
    system("sudo chown root:root /tmp/temp_file.txt");
    system("sudo chmod 600 /tmp/temp_file.txt");

    printf("Спроба прочитати як звичайний користувач:\n");
    system("cat /tmp/temp_file.txt");

    return 0;
}
