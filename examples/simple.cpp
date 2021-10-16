int main() {
    int *p = new int[10];
    p[9] = 9;

    delete[] p;
    return 0;
}
