#include <QApplication>
#include <QResource>

#include "src/gui/game_window.h"
#include "src/kernel/future_cpp_features.h"

int main (int argc, char *argv[])
{
  QApplication app (argc, argv);

  QResource::registerResource ("/path/to/myresource.rcc");

  auto window = std::make_unique<game_window> ();

  window->setWindowTitle ("Ball Game");
  window->show ();
  return app.exec ();
}
