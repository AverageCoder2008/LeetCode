int removeDuplicates(int* a, int n) {
    int k;
    int j = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            a[j] = a[i + 1];
            j++;
        }
    }
    k = j;
    if (n == 1) {
        k = 1;
    }

    return k;
}