#pragma once
#include <iostream>
using namespace std;

char* StringNCopy(char* des, char* src, int numChars);
char* StringCopy(char* des, char*src);
void DeleteSubString(char* src, int startPos, int numChars);
int FindSubString(char* parentStr, char* subStr, int startPos);
bool isSubString(char* parentStr, char* subStr);
int CountMatches(char* parentStr, char* subStr);