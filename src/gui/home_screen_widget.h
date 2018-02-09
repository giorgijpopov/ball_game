#pragma once

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class home_screen_widget : public QWidget
{
  Q_OBJECT

  QVBoxLayout *m_layout;
  QPushButton *m_start_button;
public:
  explicit home_screen_widget (QWidget *parent = 0);
  ~home_screen_widget ();

  QSize minimumSizeHint () const;
  QSize sizeHint () const;

  Q_SIGNAL void click_start_game ();
};
