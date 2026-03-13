void sort_even_odd(int n, int a[])
{
    int temp[n];
    int i, even_idx = 0, odd_idx;

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            temp[even_idx++] = a[i];
        }
    }
    odd_idx = even_idx;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            temp[odd_idx++] = a[i];
        }
    }
    for (i = 0; i < n; i++) {
        a[i] = temp[i];
    }
}
