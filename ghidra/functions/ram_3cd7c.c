/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003cd7c */

bool FUN_ram_0003cd7c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined2 *)(param_1 + 7) = 0;
    *param_1 = 0x67452301;
    param_1[1] = 0xefcdab89;
    param_1[2] = 0x98badcfe;
    param_1[3] = 0x10325476;
    param_1[4] = 0xc3d2e1f0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  return param_1 == (undefined4 *)0x0;
}


