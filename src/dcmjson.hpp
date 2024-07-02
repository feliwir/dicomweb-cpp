#pragma once
#include <string_view>
#include <dcmtk/dcmdata/dcdatset.h>

namespace dcmweb
{
    class DcmJson
    {
    public:
        static bool load_from_string(const std::string_view &json, DcmDataset &dataset);
    };
}