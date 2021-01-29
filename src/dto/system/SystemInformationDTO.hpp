#ifndef SystemInformationDTO_hpp
#define SystemInformationDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/YadomsVersionDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class SystemInformation : public oatpp::DTO
{
   DTO_INIT(SystemInformation, DTO);
   DTO_FIELD(String, runningPlatform);
   DTO_FIELD(Object<YadomsVersion>, yadoms);
   DTO_FIELD(String, startupTime);
   DTO_FIELD(String, executablePath);
   DTO_FIELD(Boolean, serverReady);
   DTO_FIELD(String, developerMode);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* SystemInformationDTO_hpp */




