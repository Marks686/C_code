#define _CRT_SECURE_NO_WARNINGS
����Ŀ¼
ǰ��
һ��ָ������
��������ָ��
1.����ָ��Ķ���
2. & ������vs������
3.����ָ���ʹ��
ǰ��
һ��ָ������
�ڳ�������ѧϰ��ָ�����飬ָ��������һ�����ָ������飬�������Ǽ򵥸�ϰ�¡�
ָ�����飺�����飬���������ָ������飬

int arr[10];//��������
char ch[5];//�ַ�����
//ָ������
int* arr2[6];//����һ���������ָ�������
//arr2��������6��Ԫ�أ������ÿ��Ԫ����int*���͵�ֵ
//ÿ��Ԫ�ض���int* ���͵�ֵ
char* arr3[5];//����ַ�ָ�������
1
2
3
4
5
6
7
ָ��������ʲô���أ�

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[] = { arr1,arr2,arr3 };

	return 0;
}
1
2
3
4
5
6
7
8
9
10
arr1�൱��1�ĵ�ַ, arr2�൱��2�ĵ�ַ, arr3�൱��3�ĵ�ַ��arr1 arr2 arr3�������͵ĵ�ַ������parr�������Ӧ����int* ���͵ġ�



int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[3] = { arr1,arr2,arr3 };

	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));//Ҳ����д��parr[i][j]
		}
		printf("\n");
	}
	return 0;
}

1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
��ӡ���������

1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
1
2
3
��������ָ��
1.����ָ��Ķ���
����ָ����ָ��

��ȣ�

����ָ�롪��ָ�����͵�ָ��
�ַ�ָ�롪��ָ���ַ���ָ��
����ָ�롪��ָ�������ָ��

int* p1[10];
int(*p2)[10];
//p1, p2�ֱ���ʲô��
1
2
3

��Ҫʹ������ָ�룬���ǻ����Ȱ���������������һ�£�

2. & ������vs������
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;
}
1
2
3
4
5
6
7
��ӡ�����

006FFAD0
006FFAD0
//������������Ԫ�ص�ַ
1
2
3
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	int sz = sizeof(arr);
	printf("%d\n", sz);
	return 0;
}
1
2
3
4
5
6
7
8
9
��ӡ�����

006FFAD0
006FFAD0
40
1
2
3
����������ȥд��ʱ���е�ͬѧ�ͻ�������壬�ո�����˵�ˣ�����������Ԫ�ص�ַ���������������Ԫ�ص�ַ����Ԫ�ص�ַ�ǵ�ַ�����Ծ���4���ֽڻ���8���ֽڣ���sizeof�����Ӧ����4 ���� 8 �����Ƿ��ֽ����40������������ַ��һģһ���������϶���������������Ԫ�ص�ַ�����ǵ�����дsizeof��arr����ʱ������������������Ԫ�ص�ַ���������Ҫע�⣺
������ͨ����ʾ�Ķ���������Ԫ�ص�ַ��

�������������⣺

1.sizeof����������sizeof���浥����һ����������ʱ����һ�����⣬�������������ʾ�������飬���������������Ĵ�С����λ���ֽڡ�
2. & ���������������������ʾ����Ȼ���������飬���� & ��������ȡ��������������ĵ�ַ��


�����뿴������룺

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);

	return 0;
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
��ӡ�����

00BBFB70
00BBFB74
00BBFB70
00BBFB74
00BBFB70
00BBFB98
1
2
3
4
5
6
���ǹ۲죬arr ��arr + 1����4���ֽڣ� & arr[0] �� & arr[0] + 1����4���ֽڣ����Ƿ�����Ԫ�ص�ַ + 1������4���ֽڣ���Ϊ����֪���������ÿ��Ԫ�ض���int���͵ģ���Ϊ��������ʾ��Ԫ�ص�ַ�Ļ����������int���͵ĵ�ַ����arr��������int * ����int * ��ָ�� + 1�����ĸ��ֽڣ����Զ������4��
�� & arr �� & arr + 1 ���40��0x28���� > 40, & ��������ȡ��������������ĵ�ַ��& arr + 1 ��ʾ�����������顣

����ָ��������������͵ĵ�ַ
�ַ�ָ����������ַ��ĵ�ַ
����ָ�������������ĵ�ַ

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int(*p2)[10] = &arr;//����ָ��
	return 0;
}
1
2
3
4
5
6
7
3.����ָ���ʹ��
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[] = &arr;//����д�ǲ��е�
	return 0;
}
1
2
3
4
5
6

warning �� ��int(*)[0]���͡�int(*)[10]��������±겻ͬ��int�� * ��[]��Ϊ[]������0�������Բ��ϣ����Ա���д�������Ԫ�أ�����ʡ��10��

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(*p + i));

	}
	return 0;
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
p��ָ������ģ� * p��ʵ���൱��������
������������������Ԫ�صĵ�ַ������ * p������������Ԫ�ص�ַ
1
2
��ӡ�����

1 2 3 4 5 6 7 8 9 10
1
���Ƿ��������÷��ǳ��ı�Ť�������÷����ܲ��ã��������ǿ���������д����

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}
1
2
3
4
5
6
7
8
9
10
11
����д���ͺ������������⡣

����ָ������� ��ά��ά������
������ָ��д�Ļ�

���˼·��



//�����鴫��ʵ�֣�
void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print1(arr, 3, 5);
	return 0;
}
//����ָ���д����
void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print2(arr, 3, 5);
	return 0;
}

1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
��ӡ�����

1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
1
2
3
����һ��˼·��


p����˵ָ����ǵ�һ�У�p + 1Ϊʲô������һ���أ�

��������int(*p)[5]����һ��ָ���ʱ��
p�������� : int(*)[5];
p ��ָ��һ����������ģ�������5��Ԫ�� int[5]
p + 1��������һ��5��intԪ�ص����顣
��������������������������������
��Ȩ����������ΪCSDN����������뻹���ٿ�һ���𡹵�ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https ://blog.csdn.net/m0_68800221/article/details/125476802