#ifndef ABOUT_HPP
#define ABOUT_HPP

#include <QDialog>

namespace Ui {
class About;
}

class About : public QDialog
{
        Q_OBJECT
        
    public:
        explicit About(QWidget *parent = 0);
        ~About();
        
    private:
        Ui::About *ui;
};

#endif // ABOUT_HPP
