#include "Tips.h"

Tips::Tips(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Tips::~Tips()
{
}

void Tips::on_enter_btn_clicked()
{
	this->close();
}