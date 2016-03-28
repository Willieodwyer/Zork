#ifndef CONTROLSWINDOW_H
#define CONTROLSWINDOW_H

#include <QDialog>

namespace Ui {
class ControlsWindow;
}

class ControlsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ControlsWindow(QWidget *parent = 0);
    ~ControlsWindow();
    void setControls();

private slots:
    void on_btnResume_clicked();

    void on_btnQuit_clicked();


private:
    Ui::ControlsWindow *ui;
};

#endif // CONTROLSWINDOW_H
