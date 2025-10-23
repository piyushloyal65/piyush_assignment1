
#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"



int main(void) {
    int choice, n;

    do {
        printf("1. Check Armstrong\n");
        printf("2. Check Adams\n");
        printf("3. Check Prime Palindrome\n");
        printf("4. Demo arraylib\n");
        printf("5. Exit\n");
        printf("choice: ");
        if (scanf("%d", &choice) != 1) return 0;

        if (choice == 5) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        if (choice == 4) {
            int a[] = {3, 1, 4, 1, 5};
            int n = 5;
            printf("Original array: ");
            displayArray(a, n);
            printf("Max index: %d\n", findMaxIndex(a, n));
            printf("Min index: %d\n", findMinIndex(a, n));
            printf("Average: %.2f\n", findAverage(a, n));
            reverseArray(a, n);
            printf("Reversed: ");
            displayArray(a, n);
            sortArray(a, n);
            printf("Sorted: ");
            displayArray(a, n);
            int val = 4;
            int pos = linearSearch(a, n, val);
            if (pos >= 0) printf("%d found at index %d\n", val, pos);
            else printf("%d not found\n", val);
            continue;
        }

        printf("Enter a number: ");
        if (scanf("%d", &n) != 1) return 0;

        switch (choice) {
            case 1:
                if (isArmstrong(n))
                    printf("%d is an Armstrong number.\n", n);
                else
                    printf("%d is NOT an Armstrong number.\n", n);
                break;
            case 2:
                if (isAdams(n))
                    printf("%d is an Adams number.\n", n);
                else
                    printf("%d is NOT an Adams number.\n", n);
                break;
            case 3:
                if (isPrimePalindrome(n))
                    printf("%d is a Prime Palindrome number.\n", n);
                else
                    printf("%d is NOT a Prime Palindrome number.\n", n);
                break;
            default:
                printf("Invalid choice! Please select between 1–5.\n");
        }
    } while (choice != 5);

    return 0;
}

