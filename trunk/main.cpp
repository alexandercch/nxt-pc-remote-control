#include <qt4/QtGui/QApplication>
#include <window.h>

int main(int argCount,char* argValues[]) {
  QApplication app(argCount,argValues);
  Window* w = new Window();
  w->show();
  return app.exec();
}
