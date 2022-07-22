// Within the class RotationInfo, there is these items

// public final int x;
// public final int y;
// public final int z;
// public final int rotation;
// public final boolean isSide;

// But since there is no classes in C, these will be replaced by a struct followed by an external function to act as a contstructor
// And for isSide, as per it being a boolean, that will be a bit of a problem, because C has no boolean type
// But for that, there's a header file in the standard library for adding booleans
#include<stdbool.h>

typedef struct RotationInfo {
    const int x;
    const int y;
    const int z;
    const int rotation;
    const bool isSide;
}, RotationInfo;

RotationInfo newRotationInfo(int x, int y, int z, int rotation, bool isSide) {
    // this.x = x;
    // this.y = y;
    // this.z = z;
    // if(isSide) {
    //     this.rotation = rotation%2;
    // } else {
    //     this.rotation = rotation;
    // }
    // this.isSide = isSide;

    RotationInfo returnedValue;
    returnedValue.x = x;
    returnedValue.y = y;
    returnedValue.z = z;
    if(isSide) {
        this.rotation = rotation%2;
    } else {
        this.rotation = rotation;
    }
    returnedValue.isSide = isSide;

    return returnedValue;
}