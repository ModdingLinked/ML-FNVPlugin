#ifndef _FALLOUTNVGAMEPLUGINS_H
#define _FALLOUTNVGAMEPLUGINS_H

#include <GamebryoGamePlugins.h>

#include <QObject>
#include <QtGlobal>

class FalloutNVGamePlugins : public GamebryoGamePlugins
{

public:
  FalloutNVGamePlugins(MOBase::IOrganizer* organizer);

protected:
  virtual bool lightPluginsAreSupported() override;
};

#endif  // _FALLOUTNVGAMEPLUGINS_H