//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d\n", &a) == 1)
//    {
//        int b = 0;
//        while (b < a)
//        {
//            b++;
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d", &a);
//    if (a % 3600 != 0)
//    {
//        b = a / 3600;
//        printf("%d ", b);
//        if ((a - 3600 * b) % 3600 != 0)
//        {
//            c = (a - 3600 * b) / 60;
//            printf("%d ", c);
//            if ((a - 60 * b - c * 60) % 60 != 0)
//            {
//                d = (a - 60 * b - c * 60) % 60;
//                printf("%d", d);
//            }
//            else printf("0");
//        }
//        else printf("0 ");
//    }
//    else printf("0 ");
//    return 0;
//}
//
//
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) == 1)
//    {
//        if (a > 0)
//            printf("1\n");
//        else if (a == 0)
//            printf("0.5\n");
//        else printf("0\n");
//
//
//    }
//    return 0;
//}


//float Add(float m, float n, float o, float p, float q)
//{
//    return m + n + o + p + q;
//}
//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    float d = 0;
//    float e = 0;
//    while (scanf("%f %f %f %f %f", &a, &b, &c, &d, &e) == 5)
//    {
//        float sum = Add(a, b, c, d, e);
//        printf("%f %f %f %f %f %f\n", a, b, c, d, e, sum);
//    }
//
//
//    return 0;
//}
