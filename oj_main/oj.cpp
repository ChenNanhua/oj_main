/*
提交OJ的时候不要交上去！！！！贼恐怖！！！不要往上拉了，没有用的
---------------------------------------------------------------------------------------------------------------------------分隔线
---------------------------------------------------------------------------------------------------------------------------分割线
*/
//??? char数组没法char a[10],char b[10]   必须要在中间加分号，不能加逗号
//计时：	double(clock())/ CLOCKS_PER_SEC

//#define debug

/*先去2010跑一遍，莫冲动,不然你会遇见恐怖的编译错误*/
/*在这里停止截取，前面涉及到debug的重定向*/

#include <iostream>
#include <iomanip>
#include<fstream>
#include <cmath>
#include <vector>
#include <array>
#include<time.h>
#include<cstring>
#include<sstream>
#include<cstdio>
#include<string.h>
#include<stdio.h>
#include<cctype>
#include"allClasses.h"
//#include<bits/stdc++.h>
using namespace std;


int main()
{
	//重定向所用	
#ifdef debug
	//cin,cout重定向
	ifstream in("D:\\C++\\oj_main\\cin.txt");
	ofstream out("D:\\C++\\oj_main\\cout.txt");
	cin.rdbuf(in.rdbuf());
	cout.rdbuf(out.rdbuf());
#endif

	//这里写代码,已在主函数之中
	student a;
	//a.input();
	a.output();
	student b = a;
	b.output();
	//这里写代码，后面有return 0;


//重定向所用
#ifdef debug
	cout << "运行时间：" << double(clock()) / CLOCKS_PER_SEC << endl;//显示程序运行时间
#endif

	return 0;
}






// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单
/*					//可用来放测试数据

*/
// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件