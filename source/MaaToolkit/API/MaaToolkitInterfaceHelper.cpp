#include "MaaToolkit/InterfaceHelper/MaaToolkitInterfaceHelper.h"

#include "InterfaceHelper/InterfaceHelper.h"
#include "Utils/Platform.h"

MaaBool MaaToolkitInterfaceHelperLoadInterface(const char* interface_path)
{
    return MAA_TOOLKIT_NS::InterfaceHelper::get_instance().load_interface(MAA_NS::path(interface_path));
}

MaaBool MaaToolkitInterfaceHelperStartAgent(MaaResource* resource)
{
    return MAA_TOOLKIT_NS::InterfaceHelper::get_instance().start_agent(resource);
}
