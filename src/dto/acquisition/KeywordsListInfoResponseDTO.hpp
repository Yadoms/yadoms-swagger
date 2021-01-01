#ifndef KEYWORDLISTINFORESPONSEDTO_hpp
#define KEYWORDLISTINFORESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/InfoDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordListInfoResponse : public oatpp::DTO
{
   DTO_INIT(KeywordListInfoResponse, DTO);
   DTO_FIELD(Boolean, result);
   DTO_FIELD(String, message);
   DTO_FIELD(Fields<Object<Info>>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDLISTINFORESPONSEDTO_hpp */
