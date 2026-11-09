/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e51c */

void FUN_ram_0003e51c(void)

{
  undefined1 *puVar1;
  undefined4 *extraout_r2;
  int extraout_r3;
  int iVar2;
  undefined1 *puVar3;
  int local_8 [2];
  
  puVar1 = (undefined1 *)FUN_ram_000297d0();
  iVar2 = extraout_r3;
  puVar3 = puVar1;
  if (extraout_r3 < 0) {
    *puVar1 = 0x2d;
    iVar2 = -extraout_r3;
    puVar3 = puVar1 + 1;
  }
  FUN_ram_0003e430(puVar3,10,iVar2,local_8,0);
  if (extraout_r2 != (undefined4 *)0x0) {
    *extraout_r2 = puVar3 + (local_8[0] - (int)puVar1);
  }
  FUN_ram_00029838(puVar1);
  return;
}


