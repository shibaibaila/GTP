#include "deng_lu_����.h"
int deng_lu_����::deng_lu()
{
	IMAGE tu[11];
	initgraph(880, 500, 0);
	loadimage(tu, "����ͼƬ.png", 880, 500);
	putimage(0, 0, tu);
	while (1)
	{
		if (jie.an_niu("ѧ����¼", 300, 240, 500, 340))
			return 0;
		if (jie.an_niu("��ʦ��¼", 580, 240, 780, 340))
			return 1;
	}
	//return 0;
}

void deng_lu_����::yun_shi_jiemian()
{
	IMAGE tu[11];
	//initgraph(880, 500, 0);
	loadimage(tu, "����ͼƬ.png", 880, 500);
	putimage(0, 0, tu);
}
