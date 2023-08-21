#include <stdio.h>
#include <stdbool.h>
int main() {

    printf("Hello, World!\n");
    return 0;
}

/**
 * stringAreEqual - checks if two strings are equal
 * @param string1 first string
 * @param string2 second string
 * @return true if strings are equal, false otherwise
 */
bool stringAreEqual(char *string1, char *string2) {
    int i = 0;
    while (string1[i] != '\0' && string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            return false;
        }
        i++;
    }
    return string1[i] == string2[i];
}
