
#include "BufferDump.h"


int main () {
    int buffer[40] = {1,2,3,4,5,6,7,'g','k','.'};
    buffer[36] = 'G';

    DUMP_BUFFER(buffer, sizeof(buffer));

    return 0;
}



