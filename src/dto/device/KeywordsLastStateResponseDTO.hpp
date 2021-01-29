#ifndef KeywordsLastStateResponseDTO_hpp
#define KeywordsLastStateResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordsLastStateResponse : public CommonsData {

   DTO_INIT(KeywordsLastStateResponse, CommonsData)
   DTO_FIELD(Fields<String>, data);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* KeywordsLastStateResponseDTO_hpp */


