#include "NameTools.h"

NameTools::NameTools(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.des_add->setWordWrap(true);
	ui.source_add->setWordWrap(true);
}

void NameTools::on_source_btn_clicked()
{
	sourcePath = QFileDialog::getExistingDirectory(NULL, "sourceFile", "C:/Users/Administrator/Desktop");
	if (sourcePath != NULL)
	{
		viewsource(changstring(sourcePath.toStdString()));
		ui.source_add->setText(sourcePath);
	}
	return;
}


void NameTools::on_run_btn_clicked()
{
	if (filename.empty())
	{
		tipe->show();
		return;
	}
	vector<string>temp;
	int numstart = ui.numstart_val->text().toInt();
	string filepath = filename.back();
	filename.pop_back();
	while (!temp.empty())
		temp.pop_back();
	for(auto i:filename)
	{
		string dsc = filepath + "\\temp"+int2string(4, numstart);
		rename(i.c_str(), dsc.c_str());
		temp.push_back(dsc);
		changename(dsc, int2string(4, numstart++));
	}
	for (auto i : temp)
	{
		if (i.find("temp"))
		{
			string cop = i;
			string dsc = cop.replace(i.find("temp"), 4, "");
			rename(i.c_str(), dsc.c_str());
		}
	}
	tips->show();
	return;
}

void NameTools::changename(string filepath, string fileid)
{
	string headname = ui.headname->text().toStdString();
	string numhead = ui.numhead->text().toStdString();
	vector<string> pixname;
	struct _finddata_t filefind;
	if (filepath[filepath.size() - 1] == '\\')
		filepath.resize(filepath.size() - 1);
	string curr = filepath + "\\*.*";
	INT64 done = 0, handle;
	if ((handle = _findfirst(curr.c_str(), &filefind)) == -1)
		return;
	while (!pixname.empty())
		pixname.pop_back();
	while (!(done = _findnext(handle, &filefind)))
	{
		if (!strcmp(filefind.name, ".."))
			continue;
		curr = filefind.name;
		pixname.push_back(filepath + "\\" + curr);
	}
	int numstart = 1;
	int numlen = 3;
	for (auto i : pixname)
	{
		string dsc = filepath + "\\" + headname + "_" + numhead + fileid + "_"+int2string(numlen, numstart++) + "_VIS" + ".jpg";
		rename(i.c_str(), dsc.c_str());
	}
	return;
}

void NameTools::viewsource(string filepath)
{
	ui.source_list->clear();
	struct _finddata_t filefind;
	if (filepath[filepath.size() - 1] == '\\')
		filepath.resize(filepath.size() - 1);
	string curr = filepath + "\\*.*";
	INT64 done = 0, handle;
	if ((handle = _findfirst(curr.c_str(), &filefind)) == -1)
		return ;
	while (!filename.empty())
		filename.pop_back();
	while (!(done = _findnext(handle, &filefind)))
	{
		if (!strcmp(filefind.name, ".."))
			continue;
		curr = filefind.name;
		QListWidgetItem *items = new QListWidgetItem(ui.source_list);
		items->setText(QString::fromStdString(curr));
		filename.push_back(filepath+"\\"+curr);
	}
	filename.push_back(filepath);
	_findclose(handle);
	return;
}

void NameTools::on_view_btn_clicked()
{
	ui.des_list->clear();
	int num = 30;
	string headname = ui.headname->text().toStdString();
	string numhead=ui.numhead->text().toStdString();
	int numstart = ui.numstart_val->text().toInt();
	bool flag = true;
	while (num--)
	{
		string Named;
		Named = headname + "_" +numhead+int2string(4, numstart++) + "_001_VIS.jpg";
		QListWidgetItem *items = new QListWidgetItem(ui.des_list);
		items->setText(QString::fromStdString(Named));
	}
	return;
}
