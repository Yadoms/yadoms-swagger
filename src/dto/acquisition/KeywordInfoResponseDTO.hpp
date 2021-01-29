#ifndef KEYWORDINFORESPONSEDTO_hpp
#define KEYWORDINFORESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/InfoDTO.hpp"
#include "../dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)


class KeywordInfoResponse : public CommonsData
{
   DTO_INIT(KeywordInfoResponse, CommonsData);
   DTO_FIELD(Object<Info>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDINFORESPONSEDTO_hpp */

