#ifndef SaveServerConfigurationDTO_hpp
#define SaveServerConfigurationDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class SaveServerConfigurationBody : public oatpp::DTO
{
   DTO_INIT(SaveServerConfigurationBody, DTO);
   DTO_FIELD(Object<Location>, location);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* SaveServerConfigurationDTO_hpp */





