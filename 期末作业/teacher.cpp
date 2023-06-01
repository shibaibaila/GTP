#include"函数头文件.h"
#include"系统__父类.h"
#include"teacher.h"
#include"teacher_表格.h"
teacher::teacher(string s, string t, int a, int b, int c)
{

}
teacher::teacher()
{
	teacher_表格 jie;
	ifstream ifs;
	ifs.open(file, ios::in);
	if (!ifs.is_open())
	{
		jie.an_niu("文件不存在", 200, 240, 500, 340);
		//cout << "文件不存在" << endl;
		ifs.close();
	}
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		jie.an_niu("文件为空", 200, 240, 500, 340);
		//cout << "文件为空" << endl;
		ifs.close();
	}
	renshu = get_tongjirenshu();
	cheng_ji_shu_zu = new xi_tong * [renshu];
	chushihua_yuangong();
}

int teacher::get_tongjirenshu()
{
	ifstream ifs;
	ifs.open(file, ios::in);
	string id;
	string name;
	int yw, yy, sx;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> yw && ifs >> yy && ifs >> sx)
	{
		num++;
	}
	ifs.close();
	return num;

}

void teacher::chushihua_yuangong()
{
	ifstream ifs;
	ifs.open(file, ios::in);
	string id;
	string name;
	int yw, yy, sx;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> yw && ifs >> yy && ifs >> sx)
	{
		xi_tong* r=NULL;
		r = new teacher(id, name, yw, yy, sx);
		cheng_ji_shu_zu[num] = r;
		num++;
	}
	ifs.close();
}

void teacher::zeng_jia()
{

}

void teacher::shan_chu()
{

}

void teacher::xiu_gai()
{
}

void teacher::cha_zhao()
{
}

void teacher::pai_xv()
{
}
