#ifndef KeywordsResponseDTO_hpp
#define KeywordsResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/device/KeywordDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordsResponse : public CommonsData {

   DTO_INIT(KeywordsResponse, CommonsData)
   DTO_FIELD(Object<KeywordData>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KeywordResponseDTO_hpp */


