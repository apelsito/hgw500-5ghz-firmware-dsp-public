/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00034784 */

/* WARNING: Removing unreachable block (ram,0x000347ae) */
/* WARNING: Removing unreachable block (ram,0x000347e2) */

void FUN_ram_00034784(uint param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar2 = (ushort)(&DAT_ram_0005bdc0)[uVar4] + uVar3 & 0xffff;
    uVar1 = (uint)(param_1 < uVar2 * uVar2);
    if ((-1 < (int)-uVar1) && (uVar3 = uVar2, param_1 == uVar2 * uVar2 && uVar1 == 0)) break;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  uVar4 = uVar3 + 1 & 0xffff;
  if (uVar4 < uVar3) {
    uVar4 = uVar3;
  }
  if (uVar4 * uVar3 < param_1) {
    *param_2 = (short)uVar4;
  }
  else {
    *param_2 = (short)uVar3;
  }
  return;
}


