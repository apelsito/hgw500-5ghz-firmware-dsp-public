/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00027c90 */

void FUN_ram_00027c90(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort local_8 [4];
  
  local_8[0] = (&DAT_ram_000b073c)[param_2 * 0x38];
  local_8[1] = (&DAT_ram_000b073e)[param_2 * 0x38];
  uVar5 = (uint)DAT_ram_00055968;
  local_8[3] = 1;
  local_8[2] = 1;
  while (param_1 = param_1 + 1, param_1 < (int)uVar5) {
    uVar2 = (uint)(byte)(&DAT_ram_000b241c)[param_1];
    uVar3 = *(uint *)(&DAT_ram_000b07a0 + uVar2 * 0x70);
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      do {
        if ((((&DAT_ram_000b073c)[uVar2 * 0x38] == local_8[uVar4]) ||
            ((&DAT_ram_000b073e)[uVar2 * 0x38] == local_8[uVar4])) &&
           (uVar1 = local_8[uVar4 + 2], local_8[uVar4 + 2] = uVar1 + 1, 2 < (ushort)(uVar1 + 1))) {
          uVar3 = uVar3 & 0xfffffffe;
          *(uint *)(&DAT_ram_000b07a0 + uVar2 * 0x70) = uVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 2);
    }
  }
  return;
}


