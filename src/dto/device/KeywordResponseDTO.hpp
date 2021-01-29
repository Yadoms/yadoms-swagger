#ifndef KeywordResponseDTO_hpp
#define KeywordResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/device/KeywordDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordResponse : public CommonsData {

   DTO_INIT(KeywordResponse, CommonsData)
   DTO_FIELD(Object<Keyword>, data);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* KeywordResponseDTO_hpp */

