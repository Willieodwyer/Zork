#include "controlswindow.h"
#include "ui_controlswindow.h"

ControlsWindow::ControlsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ControlsWindow)
{
    ui->setupUi(this);
}

ControlsWindow::~ControlsWindow()
{
    delete ui;
}

void ControlsWindow::setControls()
{
    ui->txtControls->setText("W/Up arrow:\tmove up\n\nS/Down arrow:\tmove down\n\nA/Left arrow:\tmove left\n\nD/Right arrow:\tmove right\n\nSpace:\t\tScenario menu");
}

void ControlsWindow::on_btnResume_clicked()
{
    close();
}

void ControlsWindow::on_btnQuit_clicked()
{
    qApp->quit();
}
