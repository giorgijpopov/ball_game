#include "home_screen_widget.h"

home_screen_widget::home_screen_widget (QWidget *parent) :
  QWidget(parent)
{
  resize (1000, 700);
  auto center = parent->geometry ().center ();
  auto w = center.x () / 5;
  auto h = center.y () / 5;
  auto verticalLayoutWidget = new QWidget (this);
  verticalLayoutWidget->setGeometry (QRect (center.x () - w, center.y () - h, 2 * w, 2 * h));
  m_layout = new QVBoxLayout (verticalLayoutWidget);
  m_layout->setContentsMargins (0, 0, 0, 0);
  m_start_button = new QToolButton (verticalLayoutWidget);
  m_start_button->setIcon (QIcon (":/resourse/play_button.svg"));
  m_start_button->setIconSize (QSize (2 * w, 2 * h));
  m_start_button->setAutoRaise (true);

  m_layout->addWidget (m_start_button);

//  m_layout = new QVBoxLayout (this);
//  m_start_button = new QToolButton (this);
//  m_start_button->setBaseSize (QSize (100, 100));

//  m_layout->addWidget (m_start_button);

  connect (m_start_button, &QToolButton::clicked, this, [this] { Q_EMIT click_start_game (); });
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
