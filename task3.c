#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    // Створення файлу як звичайний користувач
    system("echo 'Test file' > /tmp/original.txt");

    // Копіювання від root (припускаємо, що sudo працює)
    system("sudo cp /tmp/original.txt $HOME/copied_by_root.txt");

    // Спроба змінити файл
    printf("Спроба змінити файл...\n");
    system("echo 'New line' >> $HOME/copied_by_root.txt");

    // Спроба видалити
    printf("Спроба видалити файл...\n");
    system("rm $HOME/copied_by_root.txt");

    return 0;
}
