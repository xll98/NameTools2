#pragma once

#include <QWidget>
#include "ui_ErroTips.h"

class ErroTips : public QWidget
{
	Q_OBJECT

public:
	ErroTips(QWidget *parent = Q_NULLPTR);
	~ErroTips();

private:
	Ui::ErroTips ui;
private slots:
	void on_cancel_btn_clicked();
};
