#pragma once

#include <meojson/json.hpp>

#include "Conf/Conf.h"
#include "MaaFramework/MaaDef.h"
#include "Utils/SingletonHolder.hpp"

#include "InterfaceTypes.h"

MAA_TOOLKIT_NS_BEGIN

class InterfaceHelper : public SingletonHolder<InterfaceHelper>
{
    friend class SingletonHolder<InterfaceHelper>;

public:
    bool load_interface(const std::filesystem::path& interface_path);
    bool start_agent(MaaResource* resource);

private:
    MAA_PROJECT_INTERFACE_NS::Interface interface_;
};

MAA_TOOLKIT_NS_END
