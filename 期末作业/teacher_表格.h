#pragma once
#include"函数头文件.h"
#include"系统__父类.h"

class teacher_表格
{
public:

	int gai_yan_se(int, int, int, int);//修改颜色，使其变色
	int zao_zi_han_shu(string, int, int, int, int);//在一定范围内 显示文字
	int zai_fan_wei_nei(int, int, int, int);//判断鼠标在一定范围内
	int an_niu(string a, int l, int t, int r, int b);//当 点击这个时候，进入相应的程序
	int zao_zi_han_shu2(string biao_ti, int l, int t, int r, int b);//用于调整文字位置，方便输入
	int an_niu2(string a, int l, int t, int r, int b);//用于输入信息

	int zao_zi_han_shu3(string biao_ti, int l, int t, int r, int b);//用于显示 在输入成绩后的 信息位置

	int zao_zi_han_shu4(string biao_ti, int l, int t, int r, int b);
	int an_niu3(string a, int l, int t, int r, int b);//用于输出成绩

	void she_zhi_kongzhitai(int x,int y,int w,int h);//用于设置 控制台的大小
	void chu_shi_jei_mian();//显示初始界面
	void chu_shi_bj_jm();//初始背景
	void teacher_jei_mian();//


};
