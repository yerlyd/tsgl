#ifndef __book_h__
#define __book_h__
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

//图书类，实现对图书的描述，图书的编号，书名，借出，还入等功能

class Book 
{	

private: 
	int tag; //删除标记 1:已删 0:未删
	int no; //图书编号
	char name[20]; //书名     
	char author[20];//作者
	char fenlei[20];//分类号
	char cbs[20]; //出版社
	int cbtime;//出版时间
	double bookprice;//图书价格
	int bookcounts;//图书总数量
	int bookoutcounts;  // 图书外借数量
	int bookrepocounts; //图书书架上的库存数量

public: 
	Book(){;} 
	char* getname();//获取书名
	char* getauthorname();//获取作者名
	char* getfenlei();//获取分类号
	char* getcbsname();//获取出版社名 
    int getBookCounts();//设置图书总数量
    int getBookOutCounts();//设置图书总数量
    int getBookrepoCounts();//设置图书总数量
	int getcbtime();//获取出版时间
	double getbookprice();//获取图书价格
	int getno();//获取图书编号
	int gettag();//获取删除标记 
	void setname(char na[]);//设置书名
	void setauthorname(char aa[]);//设置作者名
	void setfenlei(char fe[]);//设置分类号
	void setcbs(char ca[]);//设置出版社
	void setcbtime(int time);//设置时间
	void setbookprice(double price);//设置图书价格
    void setBookCounts(int counts);//设置图书总数量
    void setBookOutCounts(int outcounts);//设置图书总数量
    void setBookrepoCounts(int repocounts);//设置图书总数量
	void delbook();//删除图书
	void addbook(int n,char* na,char* aa,char* fe,char* ca,int time,double price,int oa);//增加图书 
	int borrowbook();//借书操作 
	void retbook();//还书操作
	void disp();//输出图书 
}; 
#endif
