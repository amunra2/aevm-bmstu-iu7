#define LEN 9
#define ENROLL 2
#define ELEM_SZ 4

int _x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(void)
{
    int *x1 = _x;
    int x20 = (LEN - 1) / ENROLL;
    int x31 = x1[0];

    x1 += ELEM_SZ;

    do
    {
        int x2 = x1[0];
        int x3 = x1[1];

        if (!(x3 < x31))
        {
            x31 = x2;
        }

        if (!(x3 < x31))
        {
            x31 = x3;
        }

        x1 += ELEM_SZ * ENROLL;
        x20 -= 1;
    } while (x20 != 0);

    while(1) {}

    return 0;
}