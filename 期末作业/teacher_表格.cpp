#include "teacher_���.h"
#include"ϵͳ__����.h"
#include"teacher.h"
ExMessage msg = { 0 };
int teacher_���::gai_yan_se(int l, int t, int r, int b)
{
	setlinestyle(PS_SOLID, 2);
	if (zai_fan_wei_nei(l, t, r, b))
	{
		setfillcolor(RGB(192, 255, 62));//Ҫ�ȸ���ɫ�����췽��
		fillrectangle(l, t, r, b);
		return 1;
	}
	else
	{
		setfillcolor(RGB(255, 233, 131));//��ť �� ��ɫ
		fillrectangle(l, t, r, b);
		//zao_zi_han_shu("˵��", l, t, r, b);

	}

	return 0;
}
int teacher_���::zao_zi_han_shu(string biao_ti, int l, int t, int r, int b)
{
	setbkmode(TRANSPARENT);//���� ģʽ,,��ʹ �������ɫ�ı�
	settextstyle(25, 0, _T("����"));
	settextcolor(WHITE);//��ʾ�� ������ɫ
	int h = (b - t - 28) / 2;
	int w = (r - l - 101) / 2;
	outtextxy(w + l, h + t, biao_ti.c_str());

	return 0;
}
int teacher_���::zai_fan_wei_nei(int l, int t, int r, int b)
{
	if (msg.x > l && msg.x<r && msg.y>t && msg.y < b)
	{
		return 1;
	}
	return 0;
}

int teacher_���::zao_zi_han_shu2(string biao_ti, int l, int t, int r, int b)
{
	setbkmode(TRANSPARENT);//���� ģʽ,,��ʹ �������ɫ�ı�
	settextstyle(25, 0, _T("����"));
	settextcolor(WHITE);//��ʾ�� ������ɫ
	int h = (b - t - 28) / 2;
	int w = (r - l - 188) / 2;
	outtextxy(w + l, h + t, biao_ti.c_str());

	return 0;
}

int teacher_���::zao_zi_han_shu3(string biao_ti, int l, int t, int r, int b)
{
	setbkmode(TRANSPARENT);//���� ģʽ,,��ʹ �������ɫ�ı�
	settextstyle(25, 0, _T("����"));
	settextcolor(WHITE);//��ʾ�� ������ɫ
	int h = (b - t - 28) / 2;
	int w = (r - l - 8) / 2;
	outtextxy(w + l, h + t, biao_ti.c_str());

	return 0;
}


int teacher_���::an_niu(string a, int l, int t, int r, int b)
{
	//ExMessage msg = { 0 };//�������������� ���ϣ�����ʹ��ȡ�� ���λ�ô���
	//while (1)
	{
		//int dianji = 0;
		MOUSEMSG key;
		key = GetMouseMsg();
		BeginBatchDraw();
		setlinecolor(WHITE);//-----------��ʼ ����С��ť
		peekmessage(&msg);
		if (gai_yan_se(l, t, r, b))
		{

			if (key.uMsg == WM_LBUTTONDOWN)//---------------------����󣬣�������Ϸ
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

int teacher_���::an_niu2(string a, int l, int t, int r, int b)
{
	//while (1)
	{
		int dianji = 0;
		MOUSEMSG key = GetMouseMsg();
		BeginBatchDraw();
		setlinecolor(WHITE);//-----------��ʼ ����С��ť
		peekmessage(&msg);
		if (gai_yan_se(l, t, r, b))
		{

			if (key.uMsg == WM_LBUTTONDOWN)//---------------------����󣬣�����������Ϣ
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

int teacher_���::zao_zi_han_shu4(string biao_ti, int l, int t, int r, int b)
{
	setbkmode(TRANSPARENT);//���� ģʽ,,��ʹ �������ɫ�ı�
	settextstyle(25, 0, _T("����"));
	settextcolor(WHITE);//��ʾ�� ������ɫ
	int h = (b - t - 28) / 2;
	int w = (r - l - 48) / 2;
	outtextxy(w + l, h + t, biao_ti.c_str());

	return 0;
}

int teacher_���::an_niu3(string a, int l, int t, int r, int b)
{
	{
		//int dianji = 0;
		//MOUSEMSG key = GetMouseMsg();
		//BeginBatchDraw();
		setlinecolor(WHITE);//-----------��ʼ ����С��ť
		//peekmessage(&msg);
		//if (gai_yan_se(l, t, r, b))
		{

			//if (key.uMsg == WM_LBUTTONDOWN)//---------------------����󣬣�����������Ϣ
			//{
			//	return 1;
			//}
		}
		setfillcolor(RGB(255, 233, 131));//��ť �� ��ɫ
		fillrectangle(l, t, r, b);

		zao_zi_han_shu4(a, l, t, r, b);
		//EndBatchDraw();
		system("cls");
		msg.message = 0;
	}

	return 0;
}


void teacher_���::chu_shi_jei_mian()
{
	IMAGE tu[11];
	initgraph(1080, 700, 1);
	loadimage(tu, "����ͼƬ.png", 1080, 700);
	loadimage(&tu[1], "����ͼƬ.png", 1080, 700);
	putimage(0, 0, tu);
	teacher kong;//���ڴ�������
	setbkmode(TRANSPARENT);//���� ģʽ,,��ʹ �������ɫ�ı�
	setfillcolor(RGB(248, 255, 131));//Ҫ�ȸ���ɫ�����췽��
	HWND hwndGraph = GetHWnd(); // ��ȡͼ�δ��ڵľ��
	HWND hwndConsole = GetConsoleWindow();
	ShowWindow(hwndConsole, SW_HIDE);//�رտ���̨
	//fillrectangle(500,100,700,200);
	while (1)
	{
		if (an_niu("����ɼ�", 500, 80, 700, 160))
		{
			kong.zeng_jia();
		}

		if (an_niu("ɾ���ɼ�", 500, 160, 700, 240))
		{
			kong.shan_chu();
		}
		if (an_niu("���ҳɼ�", 500, 240, 700, 320))
		{
			kong.cha_zhao(); 
		}
		if (an_niu("��ʾ�ɼ�", 500, 320, 700, 400))
		{
			kong.xian_shi();
		}
		if (an_niu("�޸ĳɼ�", 500, 400, 700, 480))
		{
			kong.xiu_gai();
		}
		if (an_niu("����ɼ�", 500, 480, 700, 560))
		{
			kong.pai_xv();
		}
		if (an_niu("�˳�ҳ��", 500, 560, 700, 640))
		{
			kong.tui_chu();
		}
	}

}





void teacher_���::she_zhi_kongzhitai(int x,int y,int width,int height)
{
	HWND hwndConsole = GetConsoleWindow();
	//BOOL result = SetWindowPos(hwndConsole, HWND_TOPMOST, x, y, width, height, SWP_NOMOVE | SWP_NOSIZE);
	BOOL result = SetWindowPos(hwndConsole, HWND_TOP, x, y, width, height, SWP_SHOWWINDOW);
	//SetWindowPos(hwndConsole, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);

}

void teacher_���::chu_shi_bj_jm()
{
	IMAGE tu[11];
	//initgraph(1080, 700, 1);
	loadimage(tu, "����ͼƬ.png", 1080, 700);
	loadimage(&tu[1], "����ͼƬ.png", 1080, 700);
	putimage(0, 0, tu);
}

void teacher_���::teacher_jei_mian()
{


}