/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e8e4 */

bool FUN_ram_0003e8e4(undefined1 *param_1,undefined1 param_2)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = param_2;
  }
  return param_1 != (undefined1 *)0x0;
}


