/*
�򵥵���־��¼��. (��־���ѣ��α���ô���ӣ�������
W.J.Chang 2013.12.13

˵��:(EasyLog.h)
1, �򵥵ĵ���ʵ�֣��Զ��������գ�
2, ʹ�÷�����EasyLog::Inst()->Log("Run...");
3, ��־��¼�����Run...    [2013.12.13 16:38:42 Friday]
*/
#pragma once  
#ifndef EASY_LOG_H_8080  
#define EASY_LOG_H_8080  
#include <memory>  
#include <ctime>  
#include <iostream>  
#include <fstream>  
class EasyLog
{
public:
	static EasyLog * Inst() {
		if (0 == _instance.get()) {
			_instance.reset(new EasyLog);
		}
		return _instance.get();
	}

	void Log(std::string msg); // д��־�ķ���  
private:
	EasyLog(void) {}
	virtual ~EasyLog(void) {}
	friend class std::auto_ptr<EasyLog>;
	static std::auto_ptr<EasyLog> _instance;
};

std::auto_ptr<EasyLog> EasyLog::_instance;

void EasyLog::Log(std::string loginfo) {
	std::ofstream ofs;
	time_t t = time(0);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "\t[%Y.%m.%d %X %A]", localtime(&t));
	ofs.open("EasyLog.log", std::ofstream::app);
	ofs.write(loginfo.c_str(), loginfo.size());
	ofs << tmp << '\n';
	ofs.close();
}
#endif