/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000228e0 */

void FUN_ram_000228e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 1 & 0xff;
    (&DAT_ram_00062298)[uVar2] = param_1 + 4 + uVar2 * 4;
    uVar2 = uVar1;
  } while (uVar1 < 0xc);
  (&DAT_ram_00062298)[uVar1] = param_1 + 0x34;
  uVar2 = uVar1 + 1 & 0xff;
  (&DAT_ram_00062298)[uVar2] = param_1 + 0x38;
  uVar2 = uVar2 + 1 & 0xff;
  (&DAT_ram_00062298)[uVar2] = param_1 + 0x3c;
  uVar2 = uVar2 + 1 & 0xff;
  (&DAT_ram_00062298)[uVar2] = param_1 + 0x40;
  (&DAT_ram_00062298)[uVar2 + 1 & 0xff] = param_2;
  return;
}


