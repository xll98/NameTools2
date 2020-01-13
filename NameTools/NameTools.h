#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NameTools.h"
#include <QtWidgets/QFileDialog>
#include<iostream>
#include<string>
#include <cstring>
#include<io.h>
#include <algorithm>
#include <WINDOWS.H> 
#include "Tools.h"
#include "Tips.h"
#include "ErroTips.h"
class NameTools : public QMainWindow
{
	Q_OBJECT

public:
	NameTools(QWidget *parent = Q_NULLPTR);

private:
	vector<string>filename;
	Ui::NameToolsClass ui;
	QString sourcePath;
	QString dirPath;
	Tips *tips = new Tips();
	ErroTips *tipe = new ErroTips();
	int filenumb;
	bool flag = false; //false表示单个文件， true为多文件
	string workpath1 = "workspace\\tmp_IR";
	string workpath2 = "workspace\\tmp_VI";
	void viewsource(string filepath);
	void changename(string filepath,string fileid);
private slots:
	void on_source_btn_clicked();
	void on_run_btn_clicked();
	void on_view_btn_clicked();
};
