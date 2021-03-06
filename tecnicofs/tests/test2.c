#include "fs/operations.h"
#include <assert.h>
#include <string.h>

int main() {

    char *str = "qgFKT7tYVZ1l0XLxHiOoXwxW6HB7GYKYcCAM1sTVcghK554PptHQdelRrCEl1YTWXprlDZ0MNZtcY1qfJmFiMdlzw9KAiUAPNccaqzMVtsIf5FMLUIA8Y0NTLdX5OrKi57pZ8uVZfe6TWVOrpLHN3pPf8MAJOJXOULKvA5toYFxLbBDuLkrl3EQgU0JptnIK4Dk4tGNsOCJLb99jMe2nr43nyl9JBbQrYXpbv4kWvTCVEPJBu93tr4kU5JCo5cOSuwSgWZNRRpgiclhIY6e2hlXKpoPmwnxyi8bUiDvf9nORDSJr37g0vLUfifjgUS4hEvK8iSAPnCbyFdod3m9CioIya3WfilzaG7Nw4vL0T4xPzi4bRJgwT7AnlWdnMDfpwNgT98rF0XGTJfKI2H9aQOmNti0zlzNmS9gyzg2pVrMIENxiBM2dJXH4vJZgxuxcN081IBYLEbAFOAAJ1Kea4wwVc9Qd6ppyLSLD9a5yl7bCOnqXq8oYsreUPlqBUsLv7Igu3oCToKvlZtDUHvi44xXTF6d70YW32oJbc24R5UoE1p2FIpenz0iZkghO9MWNr9AvjCQjQmdd67G8FVDBLNxV93PtuldoG0jf61p1jBRY2qL4062kmLUTPSbe4SmpWuhBGqdA0Erz39VdT71SplAPL1vyosTnq64DeFVq6DFSEMGfNvbiaEkYGkanBr3PRSj0pClqENIh4k4p4wPSvrNZ8E1U6DcSHpeAxOm9b5cRex2fLzIeMhfgew6EVE546cdRkFNf2wK6UO2sXttuymheMCt7qzIgVcPcGL9OzRJvnyTFvErdWHapOYwBc10pjP6ZqQEnCMcw6Hun3XFPvjFpIFMwAsGgJA0WCb0fptNvbmAtDQTfxoJIQViWlTUfbXnx9cuQHhRMCtqqwKFG4tQ0arBGGvGsRvRAdDsjiffGiLMLBXgv7dpek1sv2SqNlJEkuHLf4DrTdQAmSRzRnWL2hADfoPaXxpQQFmCStaRnnn1qMA43W1RjuLSYS5yqBLOCO2";
    char *path = "/f1";
    char buffer[1024];

    assert(tfs_init() != -1);

    int f;
    ssize_t r;

    f = tfs_open(path, TFS_O_CREAT);
    assert(f != -1);

    r = tfs_write(f, str, strlen(str));
    assert(r == strlen(str));