// cons2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Piople {
private:
	int ast;                               
	int ddl;                               
	int s2;                                
	void sum()	{ s2 = ast + ddl; }


public:
	float we;
	void show() {
		cout << "as = " << ast << endl;
		cout << "ddl = " << ddl << endl;
		cout << "s = " << s2 << endl;
		cout << "we = " << we << endl;
	}
	
	 
	 void putElement(int a,int b) {
		ast = a;
		ddl = b;
		sum(); 
	} 
	 void razdel() {
		 we = (float)ast / ddl;
		 
	 }

};

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	Piople obj;
	obj.putElement(7,8);
	obj.razdel();
	obj.show();
	

	system("Pause");
	return 0;
}

