#ifndef KEYWORDLISTINFORESPONSEDTO_hpp
#define KEYWORDLISTINFORESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/InfoDTO.hpp"
#include "CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)


class KeywordsListInfoResponse : public CommonsData
{
   DTO_INIT(KeywordsListInfoResponse, CommonsData);
   DTO_FIELD(Fields<Object<Info>>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDLISTINFORESPONSEDTO_hpp */
