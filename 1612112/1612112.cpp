// 1612112.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Chuoi.h"

int main()
{
	char* src = new char[50]{ "Le Minh Duc" };
	cout << "Chuoi nguon: " << src << endl;

	char* des = new char[50];
	des = StringCopy(des, src);
	cout << "Chuoi dich sau khi copy: " << des << endl;

	char* des2 = new char[50];
	int numChars2 = 5;
	des2 = StringNCopy(des2, src, numChars2);
	cout << "Chuoi dich sau khi copy " << numChars2 << " ky tu: " << des2 << endl;

	char* des3 = new char[50];
	int numChars3 = 5;
	int startPos = 2;
	DeleteSubString(des3, startPos, numChars3);
	cout << "Chuoi dich sau khi xoa " << numChars3 << " ky tu bat dau tu vi tri " << startPos << " la: " << des3 << endl;

	char* parentStr = new char[50]{ "Le Minh Duc Duc" };
	char* subStr = new char[50]{ "Duc" };
	cout << "Chuoi cha: " << parentStr << endl;
	cout << "Chuoi con: " << subStr << endl;
	bool isExisted = isSubString(parentStr, subStr);
	if (isExisted) {
		cout << "Chuoi con co xuat hien trong chuoi cha" << endl;
	}
	else {
		cout << "Chuoi con khong xuat hien trong chuoi cha" << endl;
	}
	cout << "Vi tri xuat hien dau tien cua chuoi con trong chuoi cha: " << FindSubString(parentStr, subStr, 2) << endl;
	cout << "So lan xuat hien chuoi con trong chuoi cha: " << CountMatches(parentStr, subStr) << endl;
	return 0;
}
