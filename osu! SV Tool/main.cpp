#include "stdafx.h"
#include "osuSVTool.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	osuSVTool w;
	w.show();
	return a.exec();
}
