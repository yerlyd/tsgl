#ifndef __book_h__
#define __book_h__
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

//ͼ���࣬ʵ�ֶ�ͼ���������ͼ��ı�ţ����������������ȹ���

class Book 
{	

private: 
	int tag; //ɾ����� 1:��ɾ 0:δɾ
	int no; //ͼ����
	char name[20]; //����     
	char author[20];//����
	char fenlei[20];//�����
	char cbs[20]; //������
	int cbtime;//����ʱ��
	double bookprice;//ͼ��۸�
	int bookcounts;//ͼ��������
	int bookoutcounts;  // ͼ���������
	int bookrepocounts; //ͼ������ϵĿ������

public: 
	Book(){;} 
	char* getname();//��ȡ����
	char* getauthorname();//��ȡ������
	char* getfenlei();//��ȡ�����
	char* getcbsname();//��ȡ�������� 
    int getBookCounts();//����ͼ��������
    int getBookOutCounts();//����ͼ��������
    int getBookrepoCounts();//����ͼ��������
	int getcbtime();//��ȡ����ʱ��
	double getbookprice();//��ȡͼ��۸�
	int getno();//��ȡͼ����
	int gettag();//��ȡɾ����� 
	void setname(char na[]);//��������
	void setauthorname(char aa[]);//����������
	void setfenlei(char fe[]);//���÷����
	void setcbs(char ca[]);//���ó�����
	void setcbtime(int time);//����ʱ��
	void setbookprice(double price);//����ͼ��۸�
    void setBookCounts(int counts);//����ͼ��������
    void setBookOutCounts(int outcounts);//����ͼ��������
    void setBookrepoCounts(int repocounts);//����ͼ��������
	void delbook();//ɾ��ͼ��
	void addbook(int n,char* na,char* aa,char* fe,char* ca,int time,double price,int oa);//����ͼ�� 
	int borrowbook();//������� 
	void retbook();//�������
	void disp();//���ͼ�� 
}; 
#endif
