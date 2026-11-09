/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000274f8 */

byte FUN_ram_000274f8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (DAT_ram_00055968 < 0x42) {
    iVar1 = FUN_ram_000273c4(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_2 + 0x28));
    if (iVar1 == 0x42) {
      uVar2 = 0;
      do {
        if (((&DAT_ram_000b073c)[uVar2 * 0x38] == 0) && ((&DAT_ram_000b073e)[uVar2 * 0x38] == 0))
        goto LAB_ram_00027558;
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 0x42);
      uVar2 = 0x42;
LAB_ram_00027558:
      if (uVar2 == 0x42) {
        return 0x42;
      }
      (&DAT_ram_000b241c)[DAT_ram_00055968] = (char)uVar2;
      DAT_ram_00055968 = DAT_ram_00055968 + 1;
    }
    else {
      uVar2 = (uint)(byte)(&DAT_ram_000b241c)[iVar1];
    }
    iVar1 = uVar2 * 0x70;
    (&DAT_ram_000b073c)[uVar2 * 0x38] = *(undefined2 *)(param_1 + 0x28);
    (&DAT_ram_000b073e)[uVar2 * 0x38] = *(undefined2 *)(param_2 + 0x28);
    uVar3 = FUN_ram_0003cd1c();
    *(undefined8 *)(&DAT_ram_000b07a4 + iVar1) = uVar3;
    *(uint *)(&DAT_ram_000b07a0 + iVar1) = *(uint *)(&DAT_ram_000b07a0 + iVar1) | 3;
    FUN_ram_0003ec60(&DAT_ram_000b0740 + iVar1,param_3,0x5c);
  }
  FUN_ram_00027424();
  return DAT_ram_00055968;
}


