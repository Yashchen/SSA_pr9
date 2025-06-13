#include <stdio.h>
#include <stdlib.h>
#include <pwd.h>
#include <unistd.h> // додано для getuid()

int main() {
    struct passwd *pw;
    while ((pw = getpwent()) != NULL) {
        if (pw->pw_uid >= 1000 && pw->pw_uid != getuid()) {
            printf("Звичайний користувач: %s (UID: %d)\n", pw->pw_name, pw->pw_uid);
        }
    }
    endpwent();
    return 0;
}
