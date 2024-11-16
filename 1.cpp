int main(void)
{
         int i = 10;
         f(&i)；
         printf("i = %d\n",i);
         return 0;
}
void f(int *p)
{
        *p = 99;
}