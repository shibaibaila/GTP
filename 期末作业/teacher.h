#pragma once
#include"����ͷ�ļ�.h"
#include"ϵͳ__����.h"
#include"teacher_���.h"
class teacher :public xi_tong
{
public:
	teacher(string s, string t, int a, int b, int c);
	teacher();
	
	int get_tongjirenshu();//ͳ��ѧ������
	void chushihua_yuangong();
	void zeng_jia();
	//��ȡ������Ϣ
	void shan_chu();
	void xiu_gai() ;
	void cha_zhao();
	void pai_xv() ;
};