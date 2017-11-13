#include "reader.h"

ostream& operator<<(ostream& output,Reader& rd)
{
	output<<rd.no;
	output<<"  ";
	output<<endl;
	return output;
}

char* Reader::getname() 
{//��ȡ���� 
  return name;
}

int Reader::gettag() 
{//��ȡɾ����� 
  return tag; 
} 
int Reader::getno() 
{//��ȡ���߱�� 
  return no; 
} 

void Reader::setname(char na[]) 
{//�������� 
  strcpy(name,na); 
}

void Reader::delbook() 
{//����ɾ����� 1:��ɾ 0:δɾ 
	char i;
	cout<<"ȷ��ɾ����Y/N ?"<<endl;
	cin>>i;
	if(i=='y'||i=='Y')
		tag=1; 
}  

void Reader::addreader(int n,char *na) 
{//���Ӷ��� 
	tag=0; 
	no=n; 
	strcpy(name,na); 
	for(int i=0;i<Maxbor;i++) 
	borbook[i]=0; 
} 

void Reader::borrowbook(int bookid) 
{//������� 
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
{//������� 
	for(int i=0;i<Maxbor;i++) 
	{ 
	  if(borbook[i]==bookid) 
		{ 
			borbook[i]=0;
			cout<<"����ɹ�!"<<endl;
			return 1; 
		} 
	}
    cout<<"δ����飬����ʧ��!"<<endl;
	return 0; 
} 
void Reader::disp() 
{//����������Ϣ
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
	cout<<"\t   ��δ����"<<endl;
}
