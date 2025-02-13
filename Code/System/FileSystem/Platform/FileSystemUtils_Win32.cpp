#ifdef _WIN32
#include "../FileSystemUtils.h"
#include "System/Platform/PlatformHelpers_Win32.h"

//-------------------------------------------------------------------------

namespace EE::FileSystem
{
    Path GetCurrentProcessPath()
    {
        return Path( EE::Platform::Win32::GetCurrentModulePath() ).GetParentDirectory();
    }
}
#endif