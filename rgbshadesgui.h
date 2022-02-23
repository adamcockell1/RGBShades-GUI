#ifndef RGBSHADESGUI_H
#define RGBSHADESGUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class RGBShadesGUI; }
QT_END_NAMESPACE

class RGBShadesGUI : public QMainWindow
{
    Q_OBJECT

public:
    RGBShadesGUI(QWidget *parent = nullptr);
    ~RGBShadesGUI();

private:
    Ui::RGBShadesGUI *ui;
};
#endif // RGBSHADESGUI_H
