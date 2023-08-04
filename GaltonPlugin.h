#ifndef GALTONPLUGIN_H
#define GALTONPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class GaltonPlugin : public Plugin
{
public: 
 std::string toString() {return "Galton";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
