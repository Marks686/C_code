#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main1()
{
    long n = 0;
    long m = 0;
    while (scanf("%ld %ld", &n, &m) == 2)
    {
        long i = n;
        long j = m;
        long r = 0;
        while (r = i % j)
        {
            i = j;
            j = r;
        }
        printf("%ld\n", n*m/j+j);
    }
    return 0;
}

//#include <stdio.h>
int main2()
{
    int n = 0;
    int i = 0;
    int j = 0;
    while (scanf("%d", &n) == 1)
    {
        //…œn––
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i; j++)
            {
                printf("  ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (i = 0; i < n + 1; i++)
        {
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

int main3() {
    int score = 0;
    int n = 0;
    int max = 0;
    int min = 100;
    int sum = 0;
    while (scanf("%d", &score) == 1)
    {
        n++;
        if (score > max)
        {
            max = score;
        }
        if (score < min)
        {
            min = score;
        }
        sum += score;
        if (n == 7)
        {
            printf("%.2lf\n", (sum - max - min) / 5.0);
            n = 0;
            max = 0;
            min = 100;
            sum = 0;
        }
    }
}

struct A
{
    int a;//0-3
    //4
    short b;//4
    //6-7
    int c;//8-11
    char d;//12
    //13
};
struct B
{
    int a;//0-3
    //4
    short b;//4-5
    //6
    char c;//6
    int d;//8-11
    //12
};

int main4()
{
    printf("%d\n", sizeof(struct A));
    printf("%d\n", sizeof(struct B));

    return 0;
}
#pragma pack(4)
int main5(int argc, char* argv[])
{
    struct tagTest1
    {
        short a;//0-1
        //2
        char d;//2
        //3
        long b;//4-7
        //8
        long c;//8-11
        //12
    };
    struct tagTest2
    {
        long b;//0-3
        //4
        short c;//4-5
        //6
        char d;//6
        //7
        long a;//8-11
        //12
    };
    struct tagTest3
    {
        short c;//0
        //1
        long b;//4-7
        //8
        char d;//8
        //9
        long a;
        //12-15
        //16
    };
    struct tagTest1 stT1;
    struct tagTest2 stT2;
    struct tagTest3 stT3;

    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
    return 0;
}

/*#define MAX_SIZE A+B
struct _Record_Struct
{
    unsigned char Env_Alarm_ID : 4;
    unsigned char Para1 : 2;
    unsigned char state;
    unsigned char avail : 1;
}*Env_Alarm_Record;
struct* _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct)* 2+3);*/


int main6()
{
    unsigned char puc[4];
    struct tagPIM
    {
        unsigned char ucPim1;
        unsigned char ucData0 : 1;
        unsigned char ucData1 : 2;
        unsigned char ucData2 : 3;
    }*pstPimData;
    pstPimData = (struct tagPIM*)puc;
    memset(puc, 0, 4);
    pstPimData->ucPim1 = 2;
    pstPimData->ucData0 = 3;
    pstPimData->ucData1 = 4;
    pstPimData->ucData2 = 5;
    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
    return 0;
}

int main7()
{
    union
    {
        short k;
        char i[2];
    }*s, a;
    s = &a;
    s->i[0] = 0x39;
    s->i[1] = 0x38;
    printf("%x\n", a.k);
    return 0;
}

int main()
{
    return 0;
}