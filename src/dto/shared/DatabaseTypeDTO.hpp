#ifndef DatabaseTypeDTO_hpp
#define DatabaseTypeDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(DatabaseType, v_int32,
   VALUE(SQLITE, 1, "SQLite"),
   VALUE(POSTGRESQL, 2, "PostgreSQL")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* DatabaseTypeDTO_hpp */




