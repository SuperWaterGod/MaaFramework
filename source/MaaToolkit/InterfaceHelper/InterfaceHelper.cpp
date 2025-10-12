#include "InterfaceHelper.h"

#include <meojson/json.hpp>

#include "Utils/Logger.h"

MAA_TOOLKIT_NS_BEGIN

using namespace MAA_PROJECT_INTERFACE_NS;

bool InterfaceHelper::load_interface(const std::filesystem::path& interface_path)
{
    auto jopt = json::open(interface_path, true, true);
    if (!jopt) {
        LogError << "Failed to open and parse interface file" << VAR(interface_path);
        return false;
    }
    const json::value& j = *jopt;
    if (!j.is<Interface>()) {
        LogError << "Invalid interface file format" << VAR(interface_path);
        return false;
    }

    interface_ = j.as<Interface>();
    return true;
}

bool InterfaceHelper::start_agent(MaaResource* resource)
{
    return false;
}

MAA_TOOLKIT_NS_END
