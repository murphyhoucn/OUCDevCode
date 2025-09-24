# include <iostream>
using namespace std;

void count(int n);
int main()
{
    int n;

    while(cin >> n)
    {
        // scanf("%d", &n);
        count(n);       
    }

    return 0;
}
void count(int n)
{
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    
    if (n % 3 == 0)
    {
        flag1 = 1;
        printf("3 ");
    }
    if (n % 5 == 0)
    {
        flag2 = 1;
        printf("5 ");
    }
    if (n % 7 == 0)
    {
        flag3 = 1;
        printf("7");
    }
    
    if (flag1 == 0 && flag2 == 0 && flag3 == 0)
    {
        printf("n");
    }

}
