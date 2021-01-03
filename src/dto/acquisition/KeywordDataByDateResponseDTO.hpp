#ifndef KEYWORDDATABYHOURRESPONSEDTO_hpp
#define KEYWORDDATABYHOURRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/KeywordDataByDateDTO.hpp"
#include "CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)


class KeywordDataByDateResponse : public CommonsData
{
   DTO_INIT(KeywordDataByDateResponse, CommonsData);
   DTO_FIELD(Object<KeywordDataByDate>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDDATABYHOURRESPONSEDTO_hpp */

