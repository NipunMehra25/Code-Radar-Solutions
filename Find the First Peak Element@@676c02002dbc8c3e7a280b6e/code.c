#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int flag = 0;  // ✅ Moved flag outside the loop

    for (int i = 0; i < n; i++) {
        if (i != 0 && i != n - 1) {  // ✅ Avoids out-of-bounds error
            if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1])) {
                printf("%d\n", arr[i]);  // ✅ Print the first peak
                flag = 1;
                break;
            }
        }
    }

    if (!flag) {  // ✅ Only prints -1 if no peak was found
        printf("-1\n");
    }

    return 0;
}
