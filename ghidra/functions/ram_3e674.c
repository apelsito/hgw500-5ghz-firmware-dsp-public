/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e674 */

void FUN_ram_0003e674(void)

{
  undefined4 extraout_r2;
  undefined8 uVar1;
  
  uVar1 = FUN_ram_000297d4();
  FUN_ram_0003e574((int)uVar1,10,(int)((ulonglong)uVar1 >> 0x20),extraout_r2);
  FUN_ram_00029840();
  return;
}


