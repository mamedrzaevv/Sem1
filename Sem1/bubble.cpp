template <typename T>
int bubsort(int n, T a[]) {
    int i, j;
    T k;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
    }
    return 0;
}