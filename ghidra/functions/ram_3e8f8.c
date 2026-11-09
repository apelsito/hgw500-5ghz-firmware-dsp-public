/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e8f8 */

ushort * FUN_ram_0003e8f8(ushort *param_1,uint param_2,int param_3)

{
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 == -1) {
      return (ushort *)0x0;
    }
    if (param_2 == *param_1) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


