#include"����ͷ�ļ�.h"
#include"teacher_���.h"
#include"student_���.h"
#include"deng_lu_����.h"
#include"teacher.h"
int main()
{
	teacher c;

	teacher_��� bg;
	student_��� bgg;
	deng_lu_���� b;
	//teacher c;
	if (b.deng_lu())//0--ѧ��,1--��ʦ
	{
		//cleardevice();//������ȫ�������ݣ�
		//b.yun_shi_jiemian();
		//while (1)
		{
			BeginBatchDraw();

			bg.chu_shi_jei_mian();//��ʾ��ʼ���棬ѡ�����Ŀ��

			//teacher c;


			EndBatchDraw();
		}
	}
		
	

	bg.teacher_jei_mian();//ѡ����� T ���� S
	bgg.student_jei_mian();
	system("pause");
	//getchar();
	return 0;
}