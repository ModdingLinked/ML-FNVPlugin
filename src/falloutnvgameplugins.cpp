#include "falloutnvgameplugins.h"

using namespace MOBase;

FalloutNVGamePlugins::FalloutNVGamePlugins(MOBase::IOrganizer* organizer)
    : GamebryoGamePlugins(organizer)
{}

bool FalloutNVGamePlugins::lightPluginsAreSupported()
{
  auto files = m_Organizer->findFiles("nvse\\plugins", {"PluginExtensions.dll"});
  if (files.isEmpty())
    return false;
  return true;
}