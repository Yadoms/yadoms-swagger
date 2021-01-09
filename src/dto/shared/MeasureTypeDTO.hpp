#ifndef MeasureTypeDTO_hpp
#define MeasureTypeDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(MeasureType, v_int32,
   VALUE(ABSOLUTE, 1, "Absolute", "Absolute data, like temperature, humidity"),
   VALUE(INCREMENT, 2, "Increment", "Say Yadoms that value must be added to current value. Ex : pulse counters (water, energy counters...)"),
   VALUE(CUMULATIVE, 3, "Cumulative", "the current value is a total value (like some energy power)")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* MeasureTypeDTO_hpp */



