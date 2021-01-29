#ifndef InstanceRunningResponseDTO_hpp
#define InstanceRunningResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class InstanceRunningResponse : public CommonsData
{
   DTO_INIT(InstanceRunningResponse, CommonsData);
   DTO_FIELD(Fields<Boolean>, data) = Fields<Boolean>({ std::make_pair("isRunning", false) });
};

#include OATPP_CODEGEN_END(DTO)

#endif /* InstanceRunningResponseDTO_hpp */
