// IWYU pragma: private, include <MaaToolkit/MaaToolkitAPI.h>

#pragma once

#include "../MaaToolkitDef.h"

#ifdef __cplusplus
extern "C"
{
#endif

    MAA_TOOLKIT_API MaaBool MaaToolkitInterfaceHelperLoadInterface(const char* interface_path);
    MAA_TOOLKIT_API MaaBool MaaToolkitInterfaceHelperStartAgent(MaaResource* resource);

#ifdef __cplusplus
}
#endif
