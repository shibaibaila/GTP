#pragma once
#include"����ͷ�ļ�.h"
#include"ϵͳ__����.h"
#include"teacher_���.h"
class teacher :public xi_tong
{
public:
	teacher(string id, string name, int yw, int sx, int yy);
	teacher();

	int get_tongjirenshu();//ͳ��ѧ������
	void chushihua_yuangong();
	void wen_jian();//���ڱ��� ɾ���򱣴�� ʣ��� ��Ϣ

	void zeng_jia();
	void shan_chu();
	void xiu_gai();
	void cha_zhao();
	void pai_xv();
	void xian_shi();
	void tui_chu();
};