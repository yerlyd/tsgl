#ifndef __reader_h__
#define __reader_h__
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include<fstream>
using namespace std;
//读者类，实现对读者的描述，图书的编号，书名，借出，还入等功能
const int Maxr=100 ;//最多的读者数 
const int Maxb=100; //最多的图书数
const int Maxbor=5; //每位读者最多借的书
class Reader
{
private: 
	int tag; //删除标记 1表示已删 0表示未删 
	int no; //读者编号
	char name[20]; //读者姓名 
	int borbook[Maxbor]; //所借图书 
public: 
	Reader(){ ; } //构造函数
	friend ostream& operator<<(ostream& output,Reader& rd);
	char* getname();//获取姓名 
	int gettag();//获取删除标记 
	int getno();//获取读者编号 
	void setname(char na[]);//设置姓名 
	void delbook();//设置删除标记 1:已删 0:未删 
	void addreader(int n,char *na);//增加读者 
	void borrowbook(int bookid);//借书操作 
	int retbook(int bookid);//还书操作 
	void disp();//读出读者信息
};
#endif
