
#include "mylib.h"

int reverseDigits(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}


static int ipow(int base, int exp) {
    int res = 1;
    while (exp-- > 0) res *= base;
    return res;
}


int isArmstrong(int num) {
    if (num < 0) return 0;
    int n = num, count = 0;
    int temp = n;
    while (temp) { count++; temp /= 10; }
    if (count == 0) count = 1; 

    int sum = 0;
    temp = n;
    while (temp) {
        int d = temp % 10;
        sum += ipow(d, count);
        temp /= 10;
    }
    if (n == 0) sum = 0; 
    return (sum == num) ? 1 : 0;
}

int isAdams(int num) {
    if (num < 0) return 0;
    long sq = (long)num * (long)num;
    int revNum = reverseDigits(num);
    long sqRev = (long)revNum * (long)revNum;
    int revSq = reverseDigits((int)sq);
    return (revSq == (int)sqRev) ? 1 : 0;
}


int isPrime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; (long)i * i <= num; i += 2)
        if (num % i == 0) return 0;
    return 1;
}

int isPrimePalindrome(int num) {
    if (!isPrime(num)) return 0;
    return (reverseDigits(num) == num) ? 1 : 0;
}

