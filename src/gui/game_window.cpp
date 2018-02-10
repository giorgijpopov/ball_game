#include "game_window.h"

#include "src/gui/single_visibility_widget.h"
#include "src/gui/game_process_view.h"
#include "src/gui/home_screen_widget.h"

#include "src/gui/geometry_data_gui.h"
#include "src/kernel/future_cpp_features.h"

game_window::game_window (QWidget *parent) : QMainWindow (parent)
{
  resize (1000, 700);
  m_central_widget = new single_visibility_widget (this);
  m_geom_data = std::make_unique<geometry_data_gui> ();

  init_widgets ();
  setCentralWidget (m_central_widget);

  connect (m_home_widget, &home_screen_widget::click_start_game, this, [this] {
      m_central_widget->set_current_widget (m_game_widget);
      m_game_widget->start_game ();
    });

  connect (m_game_widget, &game_process_view::click_stop_game, this, [this] {
      m_central_widget->set_current_widget (m_home_widget);
    });
}

void game_window::init_widgets ()
{
  m_central_widget->add_widget (m_game_widget = new game_process_view (this, m_geom_data.get ()));
  m_central_widget->add_widget (m_home_widget = new home_screen_widget (this));
  m_central_widget->set_current_widget (m_home_widget);
}

game_window::~game_window () = default;
