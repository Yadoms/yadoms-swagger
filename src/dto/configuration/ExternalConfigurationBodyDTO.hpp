#ifndef ExternalConfigurationBodyDTO_hpp
#define ExternalConfigurationBodyDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class ExternalConfigurationBody : public oatpp::DTO
{
   DTO_INIT(ExternalConfigurationBody, DTO);
   DTO_FIELD(String, language);
   DTO_FIELD(Boolean, advancedParametersActive);
   DTO_FIELD(String, dateFormat);
   DTO_FIELD(Boolean, refreshPage);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* ExternalConfigurationBodyDTO_hpp */

