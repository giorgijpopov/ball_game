#pragma once

#include <QPainter>

class qt_svg_painter
{    
  QString m_filename;
  QPainter *m_painter;
  QSize m_size;
public:
  qt_svg_painter (QString filename, QPainter *painter, QSize size);
  ~qt_svg_painter ();

  void draw (QPointF center) const;
};
