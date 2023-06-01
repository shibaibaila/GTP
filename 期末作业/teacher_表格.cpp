#include "teacher_表格.h"
ExMessage msg = { 0 };
int teacher_表格::gai_yan_se(int l, int t, int r, int b)
{
	setlinestyle(PS_SOLID, 2);
	if (zai_fan_wei_nei(l, t, r, b))
	{
		setfillcolor(RGB(192, 255, 62));//要先改颜色，再造方块
		fillrectangle(l, t, r, b);
		return 1;
	}
	else
	{
		setfillcolor(RGB(255, 233, 131));//按钮 的 颜色
		fillrectangle(l, t, r, b);
		//zao_zi_han_shu("说明", l, t, r, b);

	}

	return 0;
}
int teacher_表格::zao_zi_han_shu(string biao_ti, int l, int t, int r, int b)
{
	setbkmode(TRANSPARENT);//背景 模式,,可使 字体的颜色改变
	settextstyle(25, 0, _T("粗体"));
	settextcolor(WHITE);//显示的 字体颜色
	int h = (b - t - 28) / 2;
	int w = (r - l - 101) / 2;
	outtextxy(w + l, h + t, biao_ti.c_str());

	return 0;
}
int teacher_表格::zai_fan_wei_nei(int l, int t, int r, int b)
{
	if (msg.x > l && msg.x<r && msg.y>t && msg.y < b)
	{
		return 1;
	}
	return 0;
}

int teacher_表格::zao_zi_han_shu2(string biao_ti, int l, int t, int r, int b)
{
	setbkmode(TRANSPARENT);//背景 模式,,可使 字体的颜色改变
	settextstyle(25, 0, _T("粗体"));
	settextcolor(WHITE);//显示的 字体颜色
	int h = (b - t - 28) / 2;
	int w = (r - l - 188) / 2;
	outtextxy(w + l, h + t, biao_ti.c_str());

	return 0;
}

int teacher_表格::an_niu(string a,int l, int t, int r, int b)
{
	ExMessage msg = { 0 };
	//while (1)
	{
		//int dianji = 0;
		MOUSEMSG key;
		key= GetMouseMsg();
		BeginBatchDraw();
		setlinecolor(WHITE);//-----------开始 建造小按钮
		peekmessage(&msg);
		if (gai_yan_se(l,t,r,b))
		{
			
			if (key.uMsg == WM_LBUTTONDOWN)//---------------------点击后，，进入游戏
			{
				return 1;
			}
		}
		zao_zi_han_shu(a, l, t, r, b);
		EndBatchDraw();
		system("cls");
		msg.message = 0;
	}

	return 0;
}

int teacher_表格::an_niu2(string a, int l, int t, int r, int b)
{
	//while (1)
	{
		int dianji = 0;
		MOUSEMSG key = GetMouseMsg();
		BeginBatchDraw();
		setlinecolor(WHITE);//-----------开始 建造小按钮
		peekmessage(&msg);
		if (gai_yan_se(l, t, r, b))
		{

			if (key.uMsg == WM_LBUTTONDOWN)//---------------------点击后，，进入输入信息
			{
				return 1;
			}
		}
		zao_zi_han_shu2(a, l, t, r, b);
		EndBatchDraw();
		system("cls");
		msg.message = 0;
	}

	return 0;
}

void teacher_表格::chu_shi_jei_mian()
{
	IMAGE tu[11];
	initgraph(1080, 700, 0);
	loadimage(tu, "背景图片.png", 1080, 700);
	loadimage(&tu[1], "背景图片.png", 1080, 700);
	putimage(0, 0, tu);

	setbkmode(TRANSPARENT);//背景 模式,,可使 字体的颜色改变
	setfillcolor(RGB(248, 255, 131));//要先改颜色，再造方块
	//fillrectangle(500,100,700,200);
	while (1)
	{
		if (an_niu("输入成绩", 500, 80, 700, 160))
		{
			putimage(0, 0, tu);
			while (1)
			{
				if (an_niu2("姓名：", 458, 80, 700, 160))//easyx  <----有个奇怪的问题，，必须要有另外的输出，才会显示图，，在这段里
				{

				}
				an_niu2("学号：", 458, 160, 700, 240);
				an_niu2("语文：", 458, 240, 700, 320);
				an_niu2("数学：", 458, 320, 700, 400);
				an_niu2("英语：", 458, 400, 700, 480);
			}
		}

		if(an_niu("删除成绩",500, 160, 700, 240));
		if(an_niu("查找成绩",500, 240, 700, 320));
		if(an_niu("显示成绩",500, 320, 700, 400));
		if(an_niu("修改成绩",500, 400, 700, 480));
		if(an_niu("排序成绩",500, 480, 700, 560));
		if(an_niu("退出页面", 500, 560, 700, 640));
	}

	

}
void teacher_表格::teacher_jei_mian()
{

	
}
