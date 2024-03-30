#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    // 请在此输入您的代码
    int arr[100] = {0};
    int N;
    scanf("%d", &N);
    int i = 0;
    for (i; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int M = N;
    int j = 0;
    int temp;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                M--;
                arr[i] = 0;
            }
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N-i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("%d\n", M);
    for (i = 0; i <= N; i++) {
        if (arr[i] != 0) printf("%d ", arr[i]);
    }
    return 0;
}
