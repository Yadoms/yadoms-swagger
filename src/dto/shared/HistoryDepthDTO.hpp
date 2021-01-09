#ifndef HistoryDepthDTO_hpp
#define HistoryDepthDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(HistoryDepth, v_int32,
   VALUE(DEFAULT, 1, "Default", "Default policy : keep 30-days values (by default, see yadoms.ini), and hour/day/month/year summary"),
   VALUE(NO_HISTORY, 2, "NoHistory", "No history, keep only last acquisition")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* HistoryDepthDTO_hpp */




