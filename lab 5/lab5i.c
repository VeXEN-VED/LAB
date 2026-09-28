void main()
{
    int var1 = 10, var2 = 15;
    var1 ^= var2 ^= var1 ^= var2;
    printf("%d %d", var1, var2);
}