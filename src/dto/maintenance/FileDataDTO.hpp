#ifndef FileDataDTO_hpp
#define FileDataDTO_hpp
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class FileData : public oatpp::DTO
{
   DTO_INIT(FileData, DTO);
   DTO_FIELD(Int32, size);
   DTO_FIELD(String, modificationDate);
   DTO_FIELD(String, path);
   DTO_FIELD(String, url);
   DTO_FIELD(Boolean, inprogress);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* FileDataDTO_hpp */



