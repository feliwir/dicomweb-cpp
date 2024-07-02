#include "dcmjson.hpp"

#include <dcmtk/dcmdata/dctk.h>
#include <dcmtk/dcmdata/dcfilefo.h>

#include <nlohmann/json.hpp>

using namespace dcmweb;

bool DcmJson::load_from_string(const std::string_view &json, DcmDataset &dataset)
{
    try
    {
        auto j = nlohmann::json::parse(json);
        for (auto &[key, value] : j.items())
        {
            std::cout << key << " : " << value << std::endl;
        }
    }
    catch (const nlohmann::json::exception &e)
    {
        return false;
    }

    return true;
}