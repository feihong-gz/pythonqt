#ifndef PYTHONQTWRAPPER_QGRAPHICSSIMPLETEXTITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSSIMPLETEXTITEM_H

#include <qgraphicsitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpoint.h>
#include <qrect.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsSimpleTextItem : public QGraphicsSimpleTextItem
{
public:
    PythonQtShell_QGraphicsSimpleTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsSimpleTextItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsSimpleTextItem(text, parent, scene),_wrapper(NULL) {};

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGraphicsSimpleTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsSimpleTextItem::Type};
public slots:
QGraphicsSimpleTextItem* new_QGraphicsSimpleTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsSimpleTextItem* new_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsSimpleTextItem(QGraphicsSimpleTextItem* obj) { delete obj; } 
   QFont  font(QGraphicsSimpleTextItem* theWrappedObject) const;
   int  type(QGraphicsSimpleTextItem* theWrappedObject) const;
   void paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void setFont(QGraphicsSimpleTextItem* theWrappedObject, const QFont&  font);
   QString  text(QGraphicsSimpleTextItem* theWrappedObject) const;
   bool  contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const;
   QPainterPath  opaqueArea(QGraphicsSimpleTextItem* theWrappedObject) const;
   void setText(QGraphicsSimpleTextItem* theWrappedObject, const QString&  text);
   QRectF  boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const;
   QPainterPath  shape(QGraphicsSimpleTextItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsSimpleTextItem* theWrappedObject, const QGraphicsItem*  item) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSIMPLETEXTITEM_H