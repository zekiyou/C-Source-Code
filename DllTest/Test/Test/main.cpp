#include <iostream>
#include <Windows.h>
using namespace std;
//#pragma comment(lib,"DllTest.lib")
typedef int(addDll)(int, int);
int main() {
	HINSTANCE HDll;
	HDll = LoadLibrary("D:\\SWCode\\DllTest\\Test\\Test\\DllTest.dll");
	if (HDll == nullptr) {
		cout<<"加载dll失败"<<endl;
	}
	if (HDll != nullptr) {
		cout << "加载dll成功" << endl;
	}
	addDll* p =(addDll*)GetProcAddress(HDll, "add");
	if (p == nullptr) {
		cout << "add函数获取失败" << endl;
	}
	if (p != nullptr) {
		cout << "add函数获取成功" << endl;
	}

	cout << p(5, 3) << endl;

	FreeLibrary(HDll);
	return 0;
}