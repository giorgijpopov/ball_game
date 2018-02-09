#include "single_visibility_widget.h"

#include "src/kernel/future_cpp_features.h"

single_visibility_widget::single_visibility_widget (QWidget *parent) :
  QWidget(parent)
{
  m_layout = new QVBoxLayout (this);
}

void single_visibility_widget::add_widget (QWidget *widget)
{
  m_layout->addWidget (widget);
  if (m_current_widget == nullptr)
    set_current_widget (widget);
  else
    widget->hide ();
}

void single_visibility_widget::set_current_widget (QWidget *widget)
{
  if (m_current_widget == widget)
    return;

  if (m_current_widget)
    m_current_widget->hide ();

  m_current_widget = widget;
  if (m_current_widget)
    m_current_widget->show ();
}

single_visibility_widget::~single_visibility_widget () = default;
