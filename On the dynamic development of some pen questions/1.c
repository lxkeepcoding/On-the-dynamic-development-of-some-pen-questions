//#define _CRT_SECURE_NO_WARNINGS   1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//

//这个程序存在内存泄露和程序崩溃的问题
//void GetMemory(char *p)//p被赋予了NULL
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//相当于传值
//	strcpy(str, "hello world");//str没有空间，会崩溃。
//	printf(str);//printf这种写法没有毛病
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//修改程序使他正常运行
//void GetMemory(char **p)//二级指针
//{
//	*p = (char *)malloc(100);//有测试是否开辟内存成功更完美
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);//及时释放内存，设置空指针
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//返回栈空间地址问题，注意变量的生命周期

//char *GetMemory(void)
//{
//	char p[] = "hello world";//已经被销毁了
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
//	static char p[] = "hello world";//static 延长了变量的生命周期，但是利用static会使每一次调用的
//	                                 // 都是上一次的
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


////没有free啊
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
//	//修改
//	free(str);
//	str = NULL;//free是不用的时候free
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
//	free(str);//已经释放了
//
//	//要及时设空指针
//	if (str != NULL)
//	{
//		strcpy(str, "world");//非法访问内存
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

