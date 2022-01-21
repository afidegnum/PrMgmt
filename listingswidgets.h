#ifndef LISTINGSWIDGETS_H
#define LISTINGSWIDGETS_H

#include <QWidget>

namespace Ui {
class ListingsWidgets;
}

class ListingsWidgets : public QWidget
{
    Q_OBJECT

public:
    explicit ListingsWidgets(QWidget *parent = nullptr);
    ~ListingsWidgets();

private:
    Ui::ListingsWidgets *ui;
};

#endif // LISTINGSWIDGETS_H
