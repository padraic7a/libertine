/**
 * @file main.cpp
 * @brief Libertine app mainline driver.
 */
/*
 * Copyright 2015 Canonical Ltd
 *
 * Libertine is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License, version 3, as published by the
 * Free Software Foundation.
 *
 * Libertine is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "libertine/config.h"
#include "libertine/libertine.h"

#include <unistd.h>
#include <QtCore/QDebug>

int
main(int argc, char* argv[])
{
  if (!geteuid())
  {
    qWarning() << "Please do not run " LIBERTINE_APPLICATION_NAME " using \'sudo\'.";
    exit(1);
  }

  Libertine app(argc, argv);
  return app.exec();
}
