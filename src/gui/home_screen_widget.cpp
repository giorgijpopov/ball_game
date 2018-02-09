#include "home_screen_widget.h"

home_screen_widget::home_screen_widget (QWidget *parent) :
  QWidget(parent)
{
  m_layout = new QVBoxLayout (this);
  m_layout->setGeometry (QRect (0, 0, 100, 100));
  m_start_button = new QPushButton (this);
  m_start_button->setText ("Start");
  m_layout->addWidget (m_start_button);

  connect (m_start_button, &QPushButton::clicked, this, [this] { Q_EMIT click_start_game (); });
}

QSize home_screen_widget::minimumSizeHint () const
{
  return QSize (100, 100);
}

QSize home_screen_widget::sizeHint () const
{
  return QSize (1000, 1000);
}

home_screen_widget::~home_screen_widget () = default;
