#pragma once

#include <QtWidgets/QMainWindow>
//#include "ui_HelloApp.h"

namespace Ui
{
	class HelloAppClass;
}

class HelloApp : public QMainWindow
{
    Q_OBJECT

public:
    HelloApp(QWidget *parent = Q_NULLPTR);

private:
    Ui::HelloAppClass ui;
};
