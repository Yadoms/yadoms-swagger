#ifndef RulesDTO_hpp
#define RulesDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/automation/RulesDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Rules : public oatpp::DTO
{
   DTO_INIT(Rules, DTO);
   DTO_FIELD(Vector<Object<RulesData>>, rules);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* RulesDTO_hpp */



