#ifndef PYTHONQTWRAPPER_QGLCONTEXT_H
#define PYTHONQTWRAPPER_QGLCONTEXT_H

#include <qgl.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcolor.h>
#include <qgl.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>

class PythonQtShell_QGLContext : public QGLContext
{
public:
    PythonQtShell_QGLContext(const QGLFormat&  format):QGLContext(format),_wrapper(NULL) {};
    PythonQtShell_QGLContext(const QGLFormat&  format, QPaintDevice*  device):QGLContext(format, device),_wrapper(NULL) {};

virtual bool  chooseContext(const QGLContext*  shareContext = 0);
virtual bool  create(const QGLContext*  shareContext = 0);
virtual void doneCurrent();
virtual void makeCurrent();
virtual void swapBuffers() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLContext : public QGLContext
{ public:
inline bool  chooseContext(const QGLContext*  shareContext = 0) { return QGLContext::chooseContext(shareContext); }
};

class PythonQtWrapper_QGLContext : public QObject
{ Q_OBJECT
public:
public slots:
QGLContext* new_QGLContext(const QGLFormat&  format);
QGLContext* new_QGLContext(const QGLFormat&  format, QPaintDevice*  device);
void delete_QGLContext(QGLContext* obj) { delete obj; } 
   bool  isValid(QGLContext* theWrappedObject) const;
   void drawTexture(QGLContext* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   void swapBuffers(QGLContext* theWrappedObject) const;
   QGLFormat  requestedFormat(QGLContext* theWrappedObject) const;
   QColor  overlayTransparentColor(QGLContext* theWrappedObject) const;
   void static_QGLContext_setTextureCacheLimit(int  size);
   const QGLContext*  static_QGLContext_currentContext();
   void doneCurrent(QGLContext* theWrappedObject);
   void reset(QGLContext* theWrappedObject);
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QString&  fileName);
   bool  create(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1, int  format = 0x1908);
   void makeCurrent(QGLContext* theWrappedObject);
   bool  chooseContext(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
   void setFormat(QGLContext* theWrappedObject, const QGLFormat&  format);
   QGLFormat  format(QGLContext* theWrappedObject) const;
   int  static_QGLContext_textureCacheLimit();
   void deleteTexture(QGLContext* theWrappedObject, unsigned int  tx_id);
   void drawTexture(QGLContext* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QPaintDevice*  device(QGLContext* theWrappedObject) const;
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1, int  format = 0x1908);
   bool  isSharing(QGLContext* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGLCONTEXT_H