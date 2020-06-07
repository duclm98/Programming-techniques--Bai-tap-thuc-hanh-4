#include "Chuoi.h"

int StringLength(char* s) {
	int i = 0;
	while (*(s + i) != '\0') {
		i++;
	}
	return i;
}

char* StringNCopy(char* des, char* src, int numChars) {
	int srcLength = StringLength(src);
	if (numChars > srcLength) {
		return NULL;
	}
	des = new char[numChars + 1];
	for (int i = 0; i < numChars; i++) {
		*(des + i) = *(src + i);
	}
	des[numChars] = '\0';
	return des;
}

char* StringCopy(char* des, char*src) {
	int srcLength = StringLength(src);
	des = new char[srcLength + 1];
	for (int i = 0; i < srcLength; i++) {
		*(des + i) = *(src + i);
	}
	des[srcLength] = '\0';
	return des;
}

void DeleteSubString(char* src, int startPos, int numChars) {
	int srcLength = StringLength(src);
	char* tempSrc = new char[srcLength];
	for (int i = 0; i < srcLength; i++) {
		*(tempSrc + i) = *(src + i);
	}
	src = new char[srcLength - numChars + 1];
	for (int i = 0; i < startPos; i++) {
		*(src + i) = *(tempSrc + i);
	}
	int j = startPos;
	for (int i = startPos + numChars; i < srcLength; i++) {
		*(src + j) = *(tempSrc + i);
		j++;
	}
	src[srcLength - numChars] = '\0';
	delete[] tempSrc;
}

int FindSubString(char* parentStr, char* subStr, int startPos) {
	int parentLength = StringLength(parentStr);
	int subLength = StringLength(subStr);

	if (parentLength-subLength<startPos) {
		return -1;
	}

	for (int i = startPos; i < parentLength; i++) {
		if (*(parentStr + i) == *subStr) {
			bool isExisted = true;
			for (int j = 0; j < subLength; j++) {
				if (*(parentStr + i + j) != *(subStr + j)) {
					isExisted = false;
					break;
				}
			}
			if (isExisted == true) {
				return i;
			}
		}
	}
	return -1;
}

bool isSubString(char* parentStr, char* subStr) {
	int parentLength = StringLength(parentStr);
	int subLength = StringLength(subStr);
	if (parentLength < subLength) {
		return false;
	}
	for (int i = 0; i < parentLength; i++) {
		if (*(parentStr + i) == *subStr) {
			bool isExisted = true;
			for (int j = 0; j < subLength; j++) {
				if (*(parentStr + i + j) != *(subStr + j)) {
					isExisted = false;
					break;
				}
			}
			if (isExisted == true) {
				return true;
			}
		}
	}
	return false;
}

int CountMatches(char* parentStr, char* subStr) {
	int parentLength = StringLength(parentStr);
	int subLength = StringLength(subStr);
	if (parentLength < subLength) {
		return 0;
	}
	int countMatches = 0;
	for (int i = 0; i < parentLength; i++) {
		if (*(parentStr + i) == *subStr) {
			bool isExisted = true;
			for (int j = 0; j < subLength; j++) {
				if (*(parentStr + i + j) != *(subStr + j)) {
					isExisted = false;
					break;
				}
			}
			if (isExisted == true) {
				countMatches++;
			}
		}
	}
	return countMatches;
}