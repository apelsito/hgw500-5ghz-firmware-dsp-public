/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00020980 */

void FUN_ram_00020980(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_98 [128];
  
  FUN_ram_0003d6a8(auStack_98,s_DSP_stack_canary___08x__stack_or_ram_00055228,&DAT_ram_000b83a0,
                   0xbaba0);
  FUN_ram_000228ac(auStack_98);
  iVar1 = FUN_ram_0003d6a8(auStack_98,s__08x__ram_00055254,&DAT_ram_000b83a0);
  puVar4 = &DAT_ram_000b83a0;
  do {
    uVar3 = (uint)((int)puVar4 >> 3) >> 0x1c;
    if (((uint)(puVar4 + uVar3) & 0xf) == uVar3) {
      FUN_ram_000228ac(auStack_98);
      iVar1 = FUN_ram_0003d6a8(auStack_98,s__08x__ram_00055264,puVar4);
    }
    puVar5 = puVar4 + 1;
    iVar2 = FUN_ram_0003d6a8(auStack_98 + iVar1,s__02x_ram_0005525c,*puVar4);
    iVar1 = iVar1 + iVar2;
    puVar4 = puVar5;
  } while (puVar5 < (undefined1 *)0xbaba0);
  if (iVar1 != 0) {
    FUN_ram_0003d6a8(auStack_98 + iVar1,&DAT_ram_0005526c);
    FUN_ram_000228ac(auStack_98);
  }
  return;
}


