#ifndef __reader_h__
#define __reader_h__
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include<fstream>
using namespace std;
//�����࣬ʵ�ֶԶ��ߵ�������ͼ��ı�ţ����������������ȹ���
const int Maxr=100 ;//���Ķ����� 
const int Maxb=100; //����ͼ����
const int Maxbor=5; //ÿλ�����������
class Reader
{
private: 
	int tag; //ɾ����� 1��ʾ��ɾ 0��ʾδɾ 
	int no; //���߱��
	char name[20]; //�������� 
	int borbook[Maxbor]; //����ͼ�� 
public: 
	Reader(){ ; } //���캯��
	friend ostream& operator<<(ostream& output,Reader& rd);
	char* getname();//��ȡ���� 
	int gettag();//��ȡɾ����� 
	int getno();//��ȡ���߱�� 
	void setname(char na[]);//�������� 
	void delbook();//����ɾ����� 1:��ɾ 0:δɾ 
	void addreader(int n,char *na);//���Ӷ��� 
	void borrowbook(int bookid);//������� 
	int retbook(int bookid);//������� 
	void disp();//����������Ϣ
};
#endif
