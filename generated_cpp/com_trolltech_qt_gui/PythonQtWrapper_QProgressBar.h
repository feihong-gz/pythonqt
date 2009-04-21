#ifndef PYTHONQTWRAPPER_QPROGRESSBAR_H
#define PYTHONQTWRAPPER_QPROGRESSBAR_H

#include <qprogressbar.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qprogressbar.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QProgressBar : public QProgressBar
{
public:
    PythonQtShell_QProgressBar(QWidget*  parent = 0):QProgressBar(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual QString  text() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProgressBar : public QProgressBar
{ public:
inline bool  event(QEvent*  e) { return QProgressBar::event(e); }
inline void paintEvent(QPaintEvent*  arg__1) { QProgressBar::paintEvent(arg__1); }
};

class PythonQtWrapper_QProgressBar : public QObject
{ Q_OBJECT
public:
public slots:
QProgressBar* new_QProgressBar(QWidget*  parent = 0);
void delete_QProgressBar(QProgressBar* obj) { delete obj; } 
   bool  invertedAppearance(QProgressBar* theWrappedObject);
   void setTextDirection(QProgressBar* theWrappedObject, QProgressBar::Direction  textDirection);
   QString  text(QProgressBar* theWrappedObject) const;
   bool  event(QProgressBar* theWrappedObject, QEvent*  e);
   QSize  minimumSizeHint(QProgressBar* theWrappedObject) const;
   QString  format(QProgressBar* theWrappedObject) const;
   int  maximum(QProgressBar* theWrappedObject) const;
   QProgressBar::Direction  textDirection(QProgressBar* theWrappedObject);
   int  minimum(QProgressBar* theWrappedObject) const;
   void paintEvent(QProgressBar* theWrappedObject, QPaintEvent*  arg__1);
   int  value(QProgressBar* theWrappedObject) const;
   void setFormat(QProgressBar* theWrappedObject, const QString&  format);
   bool  isTextVisible(QProgressBar* theWrappedObject) const;
   void setAlignment(QProgressBar* theWrappedObject, Qt::Alignment  alignment);
   QSize  sizeHint(QProgressBar* theWrappedObject) const;
   Qt::Orientation  orientation(QProgressBar* theWrappedObject) const;
   Qt::Alignment  alignment(QProgressBar* theWrappedObject) const;
   void setInvertedAppearance(QProgressBar* theWrappedObject, bool  invert);
   void setTextVisible(QProgressBar* theWrappedObject, bool  visible);
};

#endif // PYTHONQTWRAPPER_QPROGRESSBAR_H