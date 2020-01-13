#pragma once

#include <QWidget>
#include "ui_Tips.h"

class Tips : public QWidget
{
	Q_OBJECT

public:
	Tips(QWidget *parent = Q_NULLPTR);
	~Tips();

private:
	Ui::Tips ui;
private slots:
	void on_enter_btn_clicked();
};
