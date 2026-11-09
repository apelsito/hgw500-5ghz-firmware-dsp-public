/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00033694 */

/* WARNING: Removing unreachable block (ram,0x00033750) */
/* WARNING: Removing unreachable block (ram,0x00033762) */

void FUN_ram_00033694(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
                     undefined4 param_9)

{
  undefined2 uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 local_b8 [32];
  undefined2 local_78 [32];
  char local_38 [4];
  
  DAT_ram_000b3e9c = COUNT0;
  uVar4 = 0;
  uVar3 = 0x1f;
  do {
    iVar7 = uVar4 * 4;
    uVar5 = *(uint *)(param_1 + iVar7);
    uVar4 = uVar4 + 1 & 0xff;
    if ((int)uVar5 < 0) {
      uVar5 = ~uVar5;
    }
    uVar5 = LZCOUNT(uVar5) - 1U & 0xff;
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
    uVar5 = *(uint *)(param_2 + iVar7);
    if ((int)uVar5 < 0) {
      uVar5 = ~uVar5;
    }
    uVar5 = LZCOUNT(uVar5) - 1U & 0xff;
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
  } while (uVar4 < 0x20);
  uVar3 = 0x10 - uVar3 & 0xff;
  if (uVar3 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1 << (uVar3 - 1 & 0x1f);
  }
  uVar4 = 0;
  do {
    iVar6 = *(int *)(param_1 + uVar4 * 4) + iVar7;
    if (uVar3 < 0x20) {
      if ((int)uVar3 < -0x1f) {
        lVar2 = (longlong)iVar6 << 0x1f;
      }
      else {
        lVar2 = (longlong)(iVar6 >> uVar3);
      }
    }
    else {
      lVar2 = (longlong)(iVar6 >> 0x1f);
    }
    uVar1 = (undefined2)lVar2;
    if (0x7fffffff < lVar2) {
      uVar1 = 0xffff;
    }
    if (lVar2 < -0x80000000) {
      uVar1 = 0;
    }
    local_b8[uVar4] = uVar1;
    uVar5 = uVar4 + 1 & 0xff;
    iVar6 = *(int *)(param_2 + uVar4 * 4) + iVar7;
    if (uVar3 < 0x20) {
      if ((int)uVar3 < -0x1f) {
        lVar2 = (longlong)iVar6 << 0x1f;
      }
      else {
        lVar2 = (longlong)(iVar6 >> uVar3);
      }
    }
    else {
      lVar2 = (longlong)(iVar6 >> 0x1f);
    }
    uVar1 = (undefined2)lVar2;
    if (0x7fffffff < lVar2) {
      uVar1 = 0xffff;
    }
    if (lVar2 < -0x80000000) {
      uVar1 = 0;
    }
    local_78[uVar4] = uVar1;
    uVar4 = uVar5;
  } while (uVar5 < 0x20);
  DAT_ram_000b3ea0 = COUNT0;
  DAT_ram_000b3e98 = DAT_ram_000b3e98 + (DAT_ram_000b3ea0 - DAT_ram_000b3e9c);
  FUN_ram_0003ec60(&DAT_ram_000b3edc,local_b8,0x40);
  FUN_ram_0003ec60(&DAT_ram_000b3f1c,local_78,0x40);
  DAT_ram_000b3eac = COUNT0;
  FUN_ram_000359e4(param_9,&DAT_ram_000b441c,&DAT_ram_000b442c,&DAT_ram_000b3edc,&DAT_ram_000b3f1c,
                   local_38);
  DAT_ram_000b3eb0 = COUNT0;
  DAT_ram_000b3ea4 = (DAT_ram_000b3eb0 - DAT_ram_000b3eac) + DAT_ram_000b3ea4;
  if ((local_38[0] != '\0') || (param_7 != 0)) {
    DAT_ram_000b3ec0 = COUNT0;
    FUN_ram_0003ec60(&DAT_ram_000b3f5c,param_1,0x80);
    FUN_ram_0003ec60(&DAT_ram_000b3fdc,param_2,0x80);
    FUN_ram_00034ae4(param_9,&DAT_ram_000b3f5c,&DAT_ram_000b3fdc,param_3,param_4,param_6,param_5,
                     param_8);
    DAT_ram_000b3ec4 = COUNT0;
    DAT_ram_000b3ebc = (DAT_ram_000b3ec4 - DAT_ram_000b3ec0) + DAT_ram_000b3ebc;
  }
  return;
}


