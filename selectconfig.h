#ifndef SELECTCONFIG_H
#define SELECTCONFIG_H

#include <QMainWindow>

namespace Ui {
class SelectConfig;
}

class SelectConfig : public QMainWindow
{
    Q_OBJECT

public:
    explicit SelectConfig(QWidget *parent = 0);
    ~SelectConfig();

private slots:
    void on_default_config_radioButton_toggled(bool checked);

    void on_custom_config_radioButton_toggled(bool checked);

    void on_next_b_clicked();

private:
    Ui::SelectConfig *ui;
};

#endif // SELECTCONFIG_H