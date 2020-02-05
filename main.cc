int foo() {
    return 42;
}

int main() {
    int a = 1;
    int b = a + 2 - foo();
    return b;
}
