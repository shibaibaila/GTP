#pragma once
#include"函数头文件.h"
#include"系统__父类.h"
#include"teacher_表格.h"
class teacher :public xi_tong
{
public:
	teacher(string s, string t, int a, int b, int c);
	teacher();
	
	int get_tongjirenshu();//统计学生人数
	void chushihua_yuangong();
	void zeng_jia();
	//读取表中信息
	void shan_chu();
	void xiu_gai() ;
	void cha_zhao();
	void pai_xv() ;
};