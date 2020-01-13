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
bool doublename(string name1, string path); //true有重名，false无重名
int copyFile(string source, string destination);
int filesearch(string path, string mode, string destination);
void firstsave(string sourcePath);
bool runtest(string sourcepath, string destination, string headname, int numlen, int startnum);
/*
	path1		IRR路径包
	path2		VIS路径
	destination	目标路径
	headname	新命名的前缀
	numlen		新命名的数字长度
	numstart	新命名的启示数字
*/
int setname(string path1, string path2, string destination, string headname, int numlen, int numstart);
string MyErase(string source, string key);
string MyReplace(string source, string key, string destination);
string changstring(string a);
string int2string(int numlen,int numstart);
int filenum(string path);
