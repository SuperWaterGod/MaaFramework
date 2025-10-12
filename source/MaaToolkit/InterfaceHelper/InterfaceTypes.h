#pragma once

#include "Conf/Conf.h"
#include "Utils/JsonExt.hpp"

MAA_PROJECT_INTERFACE_NS_BEGIN

struct Agent
{
    std::string child_exec;
    std::vector<std::string> child_args;

    MEO_JSONIZATION(child_exec, MEO_OPT child_args);
};

struct Interface
{
    std::variant<std::monostate, Agent, std::vector<Agent>> agent;

    MEO_JSONIZATION(MEO_OPT agent);
};

MAA_PROJECT_INTERFACE_NS_END
