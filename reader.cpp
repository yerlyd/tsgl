#include "reader.h"

ostream& operator<<(ostream& output,Reader& rd)
{
	output<<rd.no;
	output<<"  ";
	output<<endl;
	return output;
}

char* Reader::getname() 
{//获取姓名 
  return name;
}

int Reader::gettag() 
{//获取删除标记 
  return tag; 
} 
int Reader::getno() 
{//获取读者编号 
  return no; 
} 

void Reader::setname(char na[]) 
{//设置姓名 
  strcpy(name,na); 
}

void Reader::delbook() 
{//设置删除标记 1:已删 0:未删 
	char i;
	cout<<"确定删除吗？Y/N ?"<<endl;
	cin>>i;
	if(i=='y'||i=='Y')
		tag=1; 
}  

void Reader::addreader(int n,char *na) 
{//增加读者 
	tag=0; 
	no=n; 
	strcpy(name,na); 
	for(int i=0;i<Maxbor;i++) 
	borbook[i]=0; 
} 

void Reader::borrowbook(int bookid) 
{//借书操作 
	for(int i=0;i<Maxbor;i++) 
	{ 
		if (borbook[i]==0) 
		{
			borbook[i]=bookid;
			return ; 
		} 
	} 
} 
int Reader::retbook(int bookid) 
{//还书操作 
	for(int i=0;i<Maxbor;i++) 
	{ 
	  if(borbook[i]==bookid) 
		{ 
			borbook[i]=0;
			cout<<"还书成功!"<<endl;
			return 1; 
		} 
	}
    cout<<"未借该书，还书失败!"<<endl;
	return 0; 
} 
void Reader::disp() 
{//读出读者信息
	int have=0;
	int bz=0;
	cout<<setw(5)<<no<<setw(21)<<name<<setw(15);
	for(int i=0;i<Maxbor;i++) 
	if(borbook[i]!=0)
	{ 
		if(bz==0)
		{
			have=1;
			cout<<"["<<borbook[i]<<"]\t\t"<<endl;      
			bz++;
		}
		else
		{
			cout<<"\r\t\t\t\t\t""["<<borbook[i]<<"]\t\t"<<setw(15)<<endl; 
		}
	}
	if(have==0)
	cout<<"\t   还未借书"<<endl;
}
