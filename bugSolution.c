int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20; 
    int y = *ptr; 
    printf("%d %d", x, y); 
    return 0;
} 