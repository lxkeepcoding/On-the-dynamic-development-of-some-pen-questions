//#define _CRT_SECURE_NO_WARNINGS   1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//

//�����������ڴ�й¶�ͳ������������
//void GetMemory(char *p)//p��������NULL
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//�൱�ڴ�ֵ
//	strcpy(str, "hello world");//strû�пռ䣬�������
//	printf(str);//printf����д��û��ë��
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//�޸ĳ���ʹ����������
//void GetMemory(char **p)//����ָ��
//{
//	*p = (char *)malloc(100);//�в����Ƿ񿪱��ڴ�ɹ�������
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);//��ʱ�ͷ��ڴ棬���ÿ�ָ��
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//����ջ�ռ��ַ���⣬ע���������������

//char *GetMemory(void)
//{
//	char p[] = "hello world";//�Ѿ���������
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char *GetMemory(void)
//{
//	static char p[] = "hello world";//static �ӳ��˱������������ڣ���������static��ʹÿһ�ε��õ�
//	                                 // ������һ�ε�
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


////û��free��
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�޸�
//	free(str);
//	str = NULL;//free�ǲ��õ�ʱ��free
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);//�Ѿ��ͷ���
//
//	//Ҫ��ʱ���ָ��
//	if (str != NULL)
//	{
//		strcpy(str, "world");//�Ƿ������ڴ�
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

