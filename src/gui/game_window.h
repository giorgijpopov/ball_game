#pragma once

#include <QMainWindow>
#include <memory>

class single_visibility_widget;
class geometry_data_gui;
class game_process_view;
class home_screen_widget;

class game_window : public QMainWindow
{
  single_visibility_widget *m_central_widget;
  game_process_view *m_game_widget;
  home_screen_widget *m_home_widget;

  std::unique_ptr<geometry_data_gui> m_geom_data;

  void init_widgets ();
public:
  game_window (QWidget *parent = nullptr);
  ~game_window ();
};
