#include"函数头文件.h"
#include"teacher_表格.h"
#include"student_表格.h"
#include"deng_lu_界面.h"
#include"teacher.h"
int main()
{
	teacher c;
	
	teacher_表格 bg;
	student_表格 bgg;
	deng_lu_界面 b;
	if(b.deng_lu())//0--学生,1--老师

	bg.chu_shi_jei_mian();//显示初始界面，选择操作目的

	bg.teacher_jei_mian();//选择进入 T 或是 S
	bgg.student_jei_mian();
	system("pause");
	//getchar();
	return 0;
}