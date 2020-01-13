#include "NameTools.h"
#include <windows.h>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	//system("del workspace\\tmp_IR\\*/q");
	//system("del workspace\\tmp_VI\\*/q");
	QApplication a(argc, argv);
	NameTools w;
	w.show();
	return a.exec();
}
