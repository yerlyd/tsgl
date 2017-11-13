
#include <stdio.h> 
#include<iostream>
#include<conio.h> //控制台数据输入输出的函数
#include<fstream>//文件流
#include<iomanip> //控制数据输出格式
#include<string.h>
using namespace std;
void splits(char* str,string* spstr)
{
	const char* split = ","; 
	char* p; 
	p = strtok (str,split); 
	int i=0;
	while(p!=NULL) { 
	spstr[i]=p; 
	i++;
	p = strtok(NULL,split);
	}
}

class BookMenu
{
	private:
	    char amenu[100];
		string menu[10]; 
		string fmenu[10][10];
	public:
	void loadMenu()
		{
			fstream file("menu.src",ios::in); 
			int i=0;
			while (getline(file,menu[i])) 
			{ 
				strcpy(amenu,menu[i].c_str());
				splits(amenu,fmenu[i]);
				i++;
			} 
			
			file.close(); 
		}

	void dispMenu(string& menustr)
		{  int i=0,j=0,ch=0;
			for(i=0;i<10;i++)
				if (fmenu[i][0]==menustr)
				{
					ch=i;
					break;
				}
				for(j=0;fmenu[ch][j]!="\0";j++)
				{
					cout<<fmenu[ch][j]<<endl;
				}
		}
};


int main()
{
	BookMenu menu;
	menu.loadMenu();
	string lmenu="mainmenu";
    menu.dispMenu(lmenu);
	return 0;
}
