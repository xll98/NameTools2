#pragma once
#pragma once
#include <sstream>
#include<vector>
#include<iostream>
#include<string>
#include <cstring>
#include<io.h>
#include <algorithm>
#include <WINDOWS.H> 
using namespace std;
bool doublename(string name1, string path); //true��������false������
int copyFile(string source, string destination);
int filesearch(string path, string mode, string destination);
void firstsave(string sourcePath);
bool runtest(string sourcepath, string destination, string headname, int numlen, int startnum);
/*
	path1		IRR·����
	path2		VIS·��
	destination	Ŀ��·��
	headname	��������ǰ׺
	numlen		�����������ֳ���
	numstart	����������ʾ����
*/
int setname(string path1, string path2, string destination, string headname, int numlen, int numstart);
string MyErase(string source, string key);
string MyReplace(string source, string key, string destination);
string changstring(string a);
string int2string(int numlen,int numstart);
int filenum(string path);
