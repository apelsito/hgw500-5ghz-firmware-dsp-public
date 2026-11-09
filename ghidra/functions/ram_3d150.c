/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003d150 */

void FUN_ram_0003d150(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 uVar4;
  
  sVar3 = *(short *)(param_1 + 0x1c);
  iVar1 = (int)(short)(sVar3 + 1);
  *(undefined1 *)(param_1 + sVar3 + 0x1e) = 0x80;
  *(short *)(param_1 + 0x1c) = sVar3 + 1;
  if (sVar3 < 0x38) {
    while (iVar1 < 0x38) {
      sVar3 = (short)iVar1 + 1;
      *(undefined1 *)(param_1 + iVar1 + 0x1e) = 0;
      *(short *)(param_1 + 0x1c) = sVar3;
      iVar1 = (int)sVar3;
    }
  }
  else {
    while (iVar1 < 0x40) {
      sVar3 = (short)iVar1 + 1;
      *(undefined1 *)(param_1 + iVar1 + 0x1e) = 0;
      *(short *)(param_1 + 0x1c) = sVar3;
      iVar1 = (int)sVar3;
    }
    FUN_ram_0003cf18(param_1);
    sVar3 = *(short *)(param_1 + 0x1c);
    while (iVar1 = (int)sVar3, iVar1 < 0x38) {
      sVar3 = sVar3 + 1;
      *(undefined1 *)(param_1 + iVar1 + 0x1e) = 0;
      *(short *)(param_1 + 0x1c) = sVar3;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(char *)(param_1 + 0x58) = (char)((uint)uVar2 >> 8);
  *(char *)(param_1 + 0x56) = (char)((uint)uVar2 >> 0x18);
  *(char *)(param_1 + 0x57) = (char)((uint)uVar2 >> 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(char *)(param_1 + 0x59) = (char)uVar2;
  *(char *)(param_1 + 0x5a) = (char)((uint)uVar4 >> 0x18);
  *(char *)(param_1 + 0x5b) = (char)((uint)uVar4 >> 0x10);
  *(char *)(param_1 + 0x5c) = (char)((uint)uVar4 >> 8);
  *(char *)(param_1 + 0x5d) = (char)uVar4;
  FUN_ram_0003cf18(param_1);
  return;
}


