#include <stdio.h>


int func(int a) {
    int k = 0;
    while (a != 0) {
        a /= 10;
        k++;
    }
    return a;
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%d", func(n));
    cout << "hello";
    return 0;
}
