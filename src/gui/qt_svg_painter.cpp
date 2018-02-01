#include "qt_svg_painter.h"

#include <QSvgRenderer>

qt_svg_painter::qt_svg_painter (QString filename, QPainter *painter, QSize size)
  : m_filename (filename), m_painter (painter), m_size (size)
{

}

void qt_svg_painter::draw (QPointF center) const
{
  QRectF bounds (0, 0, m_size.width (), m_size.height ());
  bounds.moveCenter (center);
  QSvgRenderer renderer (m_filename);
  renderer.render (m_painter, bounds);
}

qt_svg_painter::~qt_svg_painter () = default;
