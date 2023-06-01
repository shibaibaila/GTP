#pragma once
#include"函数头文件.h"
class xi_tong
{
public:
	string xue_hao;
	string name;
	int chinese, math, English;
	int renshu = 0;
	xi_tong** cheng_ji_shu_zu;//存放每个学生成绩指针 的 指针数组
	virtual void zeng_jia(){};
	virtual void shan_chu(){};
	virtual void xiu_gai() {};
	virtual void cha_zhao(){};
	virtual void pai_xv() {};

	//virtual void zheng_jia() {}

};
