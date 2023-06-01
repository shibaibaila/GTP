#pragma once
#include"函数头文件.h"
#include"系统__父类.h"
class teacher_表格
{
public:
	
	int gai_yan_se(int, int, int, int);//修改颜色，使其变色
	int zao_zi_han_shu(string, int, int, int, int);//在一定范围内 显示文字
	int zai_fan_wei_nei(int, int, int, int);//判断鼠标在一定范围内
	int an_niu(string a,int l, int t, int r, int b);//当 点击这个时候，进入相应的程序
	int zao_zi_han_shu2(string biao_ti, int l, int t, int r, int b);//用于调整文字位置，方便输入
	int an_niu2(string a, int l, int t, int r, int b);//用于输入信息
	 void chu_shi_jei_mian();//显示初始界面
	 void teacher_jei_mian();//

	
};

