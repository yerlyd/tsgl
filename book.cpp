#include "book.h"

char* Book::getname()
{//��ȡ����
  return name; 
} 

char* Book::getauthorname() 
{//��ȡ������
  return author;
} 
 
char* Book::getfenlei()
{//��ȡ�����
 return fenlei;
}

char* Book::getcbsname()
{//��ȡ�������� 
  return cbs; 
} 

int Book::getcbtime()
{//��ȡ����ʱ��
	return cbtime;
}

int getBookCounts()
{//����ͼ��������
	return bookcounts;
}

int getBookOutCounts()
{//����ͼ��������
	return bookoutcounts;
}

int getBookrepoCounts()
{//����ͼ��������
	return bookrepocounts;
}

double Book::getbookprice()
{//��ȡͼ��۸�
 return bookprice;
}

int Book::getno()
{//��ȡͼ����
  return no; 
}

int Book::gettag()
{//��ȡɾ����� 
  return tag; 
}
 
void Book::setname(char na[]) 
{//��������
  strcpy(name,na); 
} 

void Book::setauthorname(char aa[])
{//����������
strcpy(author,aa);
}

void Book::setfenlei(char fe[])
{//���÷����
 strcpy(fenlei,fe);
}

void Book::setcbs(char ca[])
{//���ó�����
 strcpy(cbs,ca);
}
 
void Book::setcbtime(int time) 
{//����ʱ��
  cbtime=time;
} 

void Book::setbookprice(double price)
{//����ͼ��۸�
  bookprice=price;
}

void setBookCounts(int counts)
{//����ͼ��������
	bookcounts=counts;
}
void setBookOutCounts(int outcounts)
{//����ͼ��������
	bookoutcounts=outcounts;
}
void setBookrepoCounts(int repocounts){
{//����ͼ��������
	bookrepocounts=repocounts;
}
void Book::delbook()
{//ɾ��ͼ��
 char i;
 cout<<"ȷ��ɾ����Y/N ?"<<endl;
 cin>>i;
 if(i=='y'||i=='Y')
  tag=1;
} 

void Book::addbook(int n,char *na,char *aa,char *fe,char *ca,int time,double price,int oa) 
{//����ͼ�� 
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
{//������� 
  if (onshelf>0) 
  { 
  onshelf--;
  return 1; 
  } 
  return 0; 
} 

void Book::retbook()
{//�������
  onshelf++; 
} 

void Book::disp() 
{//���ͼ�� 
  cout<<setw(3)<<no<<setw(10)<<name<<setw(10)<<author<<setw(10)<<fenlei<<setw(15)<<cbs<<setw(10)<<cbtime<<setw(10)<<bookprice<<setw(10)<<onshelf<<endl; 
} 
