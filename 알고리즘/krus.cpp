#include "�����.h";
void krus() {
	char text[300];
	//��ó��
	ScreenClear();
	sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "A");
	ScreenPrint(35, 12, text);
	sprintf(text, "B");
	ScreenPrint(65, 12, text);
	sprintf(text, "C");
	ScreenPrint(35, 22, text);
	sprintf(text, "D");
	ScreenPrint(65, 22, text);
	sprintf(text, "F");
	ScreenPrint(84, 17, text);

	sprintf(text, "\033[0;37m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;37m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);

	//1����
	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "A");
	ScreenPrint(35, 12, text);
	sprintf(text, "B");
	ScreenPrint(65, 12, text);
	sprintf(text, "C");
	ScreenPrint(35, 22, text);
	sprintf(text, "D");
	ScreenPrint(65, 22, text);
	sprintf(text, "F");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;37m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;37m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;31m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);

	//1������
	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;37m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);

	//5����
	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;37m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;31m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);

	//5������
	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;37m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	sprintf(text, "\033[0;37m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;31m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);
	//6����
	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;37m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	sprintf(text, "\033[0;37m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;31m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;31m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);

	//6������//////
	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	sprintf(text, "\033[0;37m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;31m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);


	//7����
	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	sprintf(text, "\033[0;37m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;31m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;31m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);
	//7������
	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;31m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);

	
	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;31m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;31m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);

	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;31m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;31m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m \'9\'������ ����Ŭ�� �Ͼ�ϴ�!");
	ScreenPrint(30, 24, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);


	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;31m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m \'9\'������ ����Ŭ�� �Ͼ�ϴ�!");
	ScreenPrint(30, 24, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;31m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);


	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;31m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m \'9\'������ ����Ŭ�� �Ͼ�ϴ�!");
	ScreenPrint(30, 24, text);
	sprintf(text, "\033[0;37m \'10\'������ ����Ŭ�� �Ͼ�ϴ�!");
	ScreenPrint(30, 25, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;31m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);


	ScreenClear();sprintf(text, "\033[0;37mũ�罺Į�˰���. ����ġ�� ���� ���� �ͺ��� �߰��� ����Ŭ�� ���� Ʈ���� ����� �˰���"); ScreenPrint(0, 0, text);
	sprintf(text, "\033[0;37m");
	ScreenPrint(0, 0, text);
	printsq(30, 10);
	printsq(60, 10);
	printsq(30, 20);
	printsq(60, 20);
	printsq(79, 15);
	sprintf(text, "\033[0;37mA");
	ScreenPrint(35, 12, text);
	sprintf(text, "\033[0;37mB");
	ScreenPrint(65, 12, text);
	sprintf(text, "\033[0;37mC");
	ScreenPrint(35, 22, text);
	sprintf(text, "\033[0;37mD");
	ScreenPrint(65, 22, text);
	sprintf(text, "\033[0;37mF");
	ScreenPrint(84, 17, text);
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 11, text);
	}
	sprintf(text, "\033[0;31m-");
	for (int i = 41; i < 60; i++) {
		ScreenPrint(i, 21, text);
	}
	sprintf(text, "\033[0;32m6");
	ScreenPrint(50, 11, text);
	sprintf(text, "\033[0;32m7");
	ScreenPrint(50, 21, text);
	sprintf(text, "\033[0;31m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(35, i, text);
	}
	sprintf(text, "\033[0;37m|");
	for (int i = 14; i < 20; i++) {
		ScreenPrint(65, i, text);
	}
	sprintf(text, "\033[0;32m5");
	ScreenPrint(35, 17, text);
	sprintf(text, "\033[0;32m9");
	ScreenPrint(65, 17, text);
	sprintf(text, "\033[0;37m \'9\'������ ����Ŭ�� �Ͼ�ϴ�!");
	ScreenPrint(30, 24, text);
	sprintf(text, "\033[0;37m \'10\'������ ����Ŭ�� �Ͼ�ϴ�!");
	ScreenPrint(30, 25, text);
	sprintf(text, "\033[0;37m/");
	ScreenPrint(71, 21, text);
	ScreenPrint(73, 20, text);
	ScreenPrint(75, 19, text);
	ScreenPrint(77, 18, text);
	sprintf(text, "\033[0;32m10");
	ScreenPrint(73, 20, text);
	sprintf(text, "\033[0;31m\\");
	ScreenPrint(71, 11, text);
	ScreenPrint(73, 12, text);
	ScreenPrint(75, 13, text);
	ScreenPrint(77, 14, text);
	sprintf(text, "\033[0;32m1");
	ScreenPrint(73, 12, text);
	ScreenFlipping();
	Sleep(500);
	_getch();


}