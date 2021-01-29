#ifndef AllKeywordsResponseDTO_hpp
#define AllKeywordsResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "KeywordsDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class AllKeywordsResponse : public CommonsData {

   DTO_INIT(AllKeywordsResponse, CommonsData)
   DTO_FIELD(Object<Keywords>, data);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* AllKeywordsResponseDTO_hpp */

