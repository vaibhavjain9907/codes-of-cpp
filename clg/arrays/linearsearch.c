#include <stdio.h>
int search(int key, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}

int main() {
    int arr[10] = {1, 8, 7, 15, -8}; 

    int key;
    printf("Enter the number you want to search: ");
    scanf("%d", &key);

    int found = search(key, arr, 10);
    if (found) {
        printf("Key is present\n");
    } else {
        printf("Not found\n");
    }

    return 0;
}
