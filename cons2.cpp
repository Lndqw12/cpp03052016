// cons2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Piople {
private:
	int ast;                               //
	int ddl;                               //
	int s2;                                //
	void sum()	{ s2 = ast + ddl; }        //

public:
	float we;
	void show() {
		cout << "���������� as = " << ast << endl;
		cout << "���������� ddl = " << ddl << endl;
		cout << "���������� s = " << s2 << endl;
		cout << "���������� we = " << we << endl;
	}
	
	 
	 void putElement(int a,int b, double c) {
		ast = a;
		ddl = b;
		we = c;
		sum(); 
	} 

};

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	Piople obj;
	obj.putElement(23,21, 2.3);
	obj.we = 25;
	obj.show();
	

	system("Pause");
	return 0;
}

