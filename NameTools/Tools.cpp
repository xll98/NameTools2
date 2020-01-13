#include "Tools.h"
#define TMPIR "workspace\\tmp_IR\\"
#define TMPVI "workspace\\tmp_VI\\"

void firstsave(string sourcePath)
{
	string path, mode, destination;
	for (int i = 1; i < 3; i++)
	{
		if (i == 1)
		{
			mode = "IRR";
			destination = TMPIR;
		}
		if (i == 2)
		{
			mode = "VIS";
			destination =TMPVI;
		}
		filesearch(sourcePath, mode, destination);
	}
	return;
}
string MyErase(string source, string key)
{
	string tmp = strstr(source.c_str(), key.c_str());
	source.erase(source.length() - tmp.length(), source.length());
	tmp.erase(0, key.length());
	string ans = source + tmp;
	return ans;
}

int copyFile(string source, string destination)
{

	CopyFileA(source.c_str(), destination.c_str(), false);//false´ú±í¸²¸Ç£¬true²»¸²¸Ç    
	return 0;
}

bool doublename(string name1, string path)
{
	struct _finddata_t filefind;
	if (path[path.size() - 1] == '\\')
		path.resize(path.size() - 1);
	string curr = path + "\\*.*";
	INT64 done = 0, handle;
	if ((handle = _findfirst(curr.c_str(), &filefind)) == -1)
		return 0;
	while (!(done = _findnext(handle, &filefind)))
	{
		if (!strcmp(filefind.name, ".."))
			continue;
		string tmp = filefind.name;
		if (tmp==name1)
		{
			return true;
		}
	}
	_findclose(handle);
	return false;
}

int filenum(string path)
{
	int num = 0;
	struct _finddata_t filefind;
	if (path[path.size() - 1] == '\\')
		path.resize(path.size() - 1);
	string curr = path + "\\*.*";
	INT64 done = 0, handle;
	if ((handle = _findfirst(curr.c_str(), &filefind)) == -1)
		return 0;
	while (!(done = _findnext(handle, &filefind)))
	{
		if (!strcmp(filefind.name, ".."))
			continue;
		num++;
	}
	_findclose(handle);
	return num;
}

int filesearch(string path, string mode, string destination)
{
	struct _finddata_t filefind;
	if (path[path.size() - 1] == '\\')
		path.resize(path.size() - 1);
	string curr = path + "\\*.*";
	INT64 done = 0, handle;
	if ((handle = _findfirst(curr.c_str(), &filefind)) == -1)
		return 0;
	while (!(done = _findnext(handle, &filefind)))
	{
		if (!strcmp(filefind.name, ".."))
			continue;
		curr = path + "\\" + filefind.name;
		if (strstr(filefind.name, mode.c_str()))
		{
			string des = MyErase(destination + filefind.name, mode);
			copyFile(curr, des);
		}
	}
	_findclose(handle);
	return 0;
}

string MyReplace(string source, string key, string destination)
{
	string tmp = strstr(source.c_str(), key.c_str());
	source.erase(source.length() - tmp.length(), source.length());
	tmp.erase(0, key.length());
	string ans = source + destination + tmp;
	return ans;
}

int setname(string path1, string path2, string destination, string headname, int numlen, int numstart)
{
	struct _finddata_t filefind;
	if (path1[path1.size() - 1] == '\\')
		path1.resize(path1.size() - 1);
	string curr = path1 + "\\*.*";
	if (path2[path2.size() - 1] == '\\')
		path2.resize(path2.size() - 1);
	INT64 done = 0, handle;
	if ((handle = _findfirst(curr.c_str(), &filefind)) == -1)
		return 0;
	while (!(done = _findnext(handle, &filefind)))
	{

		string curr2 = path2 + "\\*.*";

		if (!strcmp(filefind.name, ".."))
			continue;
		curr = path1 + "\\" + filefind.name;
		struct _finddata_t filefind2;
		INT64 done2 = 0, handle2;
		if ((handle2 = _findfirst(curr2.c_str(), &filefind2)) == -1)
			return 0;
		while (!(done2 = _findnext(handle2, &filefind2)))
		{
			if (!strcmp(filefind2.name, ".."))
				continue;
			curr2 = path2 + "\\" + filefind2.name;
			if (strstr(filefind.name, filefind2.name))
			{
				string workname = filefind.name;
				string numadd = workname.substr(14, 3);
				string des1 = destination + headname + "_" + int2string(numlen, numstart) + "_" + numadd + "_IRR" + ".jpg";
				string des2 = destination + headname + "_" + int2string(numlen, numstart) + "_" + numadd + "_VIS" + ".jpg";
				numstart++;
				copyFile(curr, des1);
				copyFile(curr2, des2);
				break;
			}
		}
		_findclose(handle2);
	}
	_findclose(handle);
	return 0;

}

bool runtest(string sourcepath, string destination, string headname, int numlen, int startnum)
{
	string path1 =TMPIR;
	string path2 =TMPVI;
	firstsave(sourcepath);
	setname(path1, path2, destination, headname, numlen, startnum);
	return true;
}

string changstring(string a)
{
	string::size_type pos = 0;
	while ((pos = a.find('/', pos)) != string::npos)
	{
		a.erase(pos, 1);
		a.insert(pos, "\\");
		pos = pos + 1;
	}
	return a;
}

string int2string(int n, int i)
{
	if (n < 3)
		n = 3;
	string ans = to_string(i);
	int len = ans.length();
	if (len < n)
	{
		for (int j = 0; j < n - len; j++)
			ans = "0" + ans;
	}
	return ans;
}