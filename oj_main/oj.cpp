/*
�ύOJ��ʱ��Ҫ����ȥ�����������ֲ���������Ҫ�������ˣ�û���õ�
---------------------------------------------------------------------------------------------------------------------------�ָ���
---------------------------------------------------------------------------------------------------------------------------�ָ���
*/
//??? char����û��char a[10],char b[10]   ����Ҫ���м�ӷֺţ����ܼӶ���
//��ʱ��	double(clock())/ CLOCKS_PER_SEC

//#define debug

/*��ȥ2010��һ�飬Ī�嶯,��Ȼ��������ֲ��ı������*/
/*������ֹͣ��ȡ��ǰ���漰��debug���ض���*/

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
	//�ض�������	
#ifdef debug
	//cin,cout�ض���
	ifstream in("D:\\C++\\oj_main\\cin.txt");
	ofstream out("D:\\C++\\oj_main\\cout.txt");
	cin.rdbuf(in.rdbuf());
	cout.rdbuf(out.rdbuf());
#endif

	//����д����,����������֮��
	student a;
	//a.input();
	a.output();
	student b = a;
	b.output();
	//����д���룬������return 0;


//�ض�������
#ifdef debug
	cout << "����ʱ�䣺" << double(clock()) / CLOCKS_PER_SEC << endl;//��ʾ��������ʱ��
#endif

	return 0;
}






// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�
/*					//�������Ų�������

*/
// ������ʾ: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�