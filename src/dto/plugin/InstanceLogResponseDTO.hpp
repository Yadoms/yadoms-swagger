#ifndef InstanceLogResponseDTO_hpp
#define InstanceLogResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class InstanceLogResponse : public CommonsData
{
   DTO_INIT(InstanceLogResponse, CommonsData);
   DTO_FIELD(Fields<String>, data) = Fields<String>({ std::make_pair("log","") });
};

#include OATPP_CODEGEN_END(DTO)

#endif /* InstanceLogResponseDTO_hpp */