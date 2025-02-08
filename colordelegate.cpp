#include "colordelegate.h"

colordelegate::colordelegate(QObject* parent) : QStyledItemDelegate(parent) {}

void colordelegate::paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    QVariant value = index.sibling(index.row(), 5).data();
    //QVariant listen = index.sibling(index.row(), 6).data();

    QStyledItemDelegate::paint(painter, option, index);

    QColor backgroundColor;
    if (value.toInt() > 0) {
        backgroundColor = QColor(138, 161, 79);
    }
    else {
        backgroundColor = QColor(Qt::white);
    }

    painter->fillRect(option.rect, backgroundColor);
    painter->setPen(Qt::black);
}

