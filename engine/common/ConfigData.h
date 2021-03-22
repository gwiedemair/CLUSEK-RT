//
// Created by jbili on 19.03.2021.
//

#ifndef CLUSEK_RT_CONFIGDATA_H
#define CLUSEK_RT_CONFIGDATA_H

#include "generators/SerializationMacros.h"

SERIALIZE_OBJECT(ConfigData)
struct ConfigData final
{
    SERIALIZE_FIELD(FilePath, std::string)
    std::string FilePath{};
};

#endif //CLUSEK_RT_CONFIGDATA_H
