#pragma once

#include <QWidget>
#include <QVBoxLayout>

class single_visibility_widget : public QWidget
{
  QVBoxLayout *m_layout;
  QWidget *m_current_widget = nullptr;
public:
  explicit single_visibility_widget (QWidget *parent = 0);
  ~single_visibility_widget ();

  void add_widget (QWidget *widget);
  void set_current_widget (QWidget *widget);
};
