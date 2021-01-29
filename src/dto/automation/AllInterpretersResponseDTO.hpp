#ifndef AllInterpretersRESPONSEDTO_hpp
#define AllInterpretersRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/automation/InterpretersDTO.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class AllInterpretersResponse : public CommonsData
{
   DTO_INIT(AllInterpretersResponse, CommonsData);
   DTO_FIELD(Object<Interpreters>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* AllInterpretersRESPONSEDTO_hpp */
