/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00026a8c */

undefined4 * FUN_ram_00026a8c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (((param_2 < 0xc) &&
      (uVar1 = (uint)(byte)(&DAT_ram_000622e4)[param_2 + param_1 * 0x18], uVar1 < 0xc)) &&
     ((&DAT_ram_0006231c)[uVar1 * 0x1a16] != 0)) {
    puVar2 = &DAT_ram_0006231c + uVar1 * 0x1a16;
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}


