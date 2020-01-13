#include "ErroTips.h"

ErroTips::ErroTips(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

ErroTips::~ErroTips()
{
}

void ErroTips::on_cancel_btn_clicked()
{
	this->close();
	return;
}