find_package(nlohmann_json REQUIRED)
find_package(dcmtk REQUIRED)

add_library(dcmweb-cpp
    dcmjson.cpp
    dcmjson.hpp
)

target_link_libraries(dcmweb-cpp
    PRIVATE
        nlohmann_json::nlohmann_json
        DCMTK::ofstd
        DCMTK::dcmdata
        DCMTK::dcmimgle
)