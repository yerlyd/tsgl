#include "book.h"

char* Book::getname()
{//获取书名
  return name; 
} 

char* Book::getauthorname() 
{//获取作者名
  return author;
} 
 
char* Book::getfenlei()
{//获取分类号
 return fenlei;
}

char* Book::getcbsname()
{//获取出版社名 
  return cbs; 
} 

int Book::getcbtime()
{//获取出版时间
	return cbtime;
}

int getBookCounts()
{//设置图书总数量
	return bookcounts;
}

int getBookOutCounts()
{//设置图书总数量
	return bookoutcounts;
}

int getBookrepoCounts()
{//设置图书总数量
	return bookrepocounts;
}

double Book::getbookprice()
{//获取图书价格
 return bookprice;
}

int Book::getno()
{//获取图书编号
  return no; 
}

int Book::gettag()
{//获取删除标记 
  return tag; 
}
 
void Book::setname(char na[]) 
{//设置书名
  strcpy(name,na); 
} 

void Book::setauthorname(char aa[])
{//设置作者名
strcpy(author,aa);
}

void Book::setfenlei(char fe[])
{//设置分类号
 strcpy(fenlei,fe);
}

void Book::setcbs(char ca[])
{//设置出版社
 strcpy(cbs,ca);
}
 
void Book::setcbtime(int time) 
{//设置时间
  cbtime=time;
} 

void Book::setbookprice(double price)
{//设置图书价格
  bookprice=price;
}

void setBookCounts(int counts)
{//设置图书总数量
	bookcounts=counts;
}
void setBookOutCounts(int outcounts)
{//设置图书总数量
	bookoutcounts=outcounts;
}
void setBookrepoCounts(int repocounts){
{//设置图书总数量
	bookrepocounts=repocounts;
}
void Book::delbook()
{//删除图书
 char i;
 cout<<"确定删除吗？Y/N ?"<<endl;
 cin>>i;
 if(i=='y'||i=='Y')
  tag=1;
} 

void Book::addbook(int n,char *na,char *aa,char *fe,char *ca,int time,double price,int oa) 
{//增加图书 
  tag=0; 
  no=n; 
  strcpy(name,na);
  strcpy(author,aa);
  strcpy(cbs,ca);
  strcpy(fenlei,fe);
  cbtime=time;
  bookprice=price;
  onshelf=oa; 
} 

int Book::borrowbook() 
{//借书操作 
  if (onshelf>0) 
  { 
  onshelf--;
  return 1; 
  } 
  return 0; 
} 

void Book::retbook()
{//还书操作
  onshelf++; 
} 

void Book::disp() 
{//输出图书 
  cout<<setw(3)<<no<<setw(10)<<name<<setw(10)<<author<<setw(10)<<fenlei<<setw(15)<<cbs<<setw(10)<<cbtime<<setw(10)<<bookprice<<setw(10)<<onshelf<<endl; 
} 
